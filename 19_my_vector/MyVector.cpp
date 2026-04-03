#include "MyVector.hpp"
#include <iostream>


MyVector::MyVector(int capacity){
    this->capacity = capacity;    //two different capacity: this-> capacity
    size = 0;
    elements = new int[capacity];
}

// copy constructor
MyVector::MyVector(const MyVector& other){
    //copy capacity and size
    capacity = other.capacity;
    size = other.size;

    //dynamically allocate the new array
    elements = new int[capacity];
    for (int i = 0; i < size; i++){
        elements[i] = other.elements[i];
    }

}

MyVector::~MyVector(){
    delete [] elements;
}


void MyVector::print() const{
    std::cout << "[";
    for(int i = 0; i < size; i++){
        std::cout << elements[i] << " ";
    }
    std::cout << "]\n";
}



void MyVector::push_back(int val){
    // TO DO:
    // consdier the case when the vector is full. can use bool method isFull
    // create new capacity that is double the size, then copy the only values inside, delallocate old capacity
    if (Full()){
        allocateMemory(capacity * 2);
    }
    elements[size] = val;
    size++;

}

bool MyVector::Full() const{
    return size == capacity;

}

bool MyVector::empty() const{ 
    return size == 0;

}

void MyVector::allocateMemory(int memory_size){
    capacity = memory_size;

    //save the old address of the array
    int * old_array = elements;

    //allocate new elements
    elements = new int (capacity);

    //copy the elemets
    for (int i = 0; i < size; i++){
        elements[i] = old_array[i];
    }

    // de-allocate old array
    delete [] old_array;
}

int MyVector::pop_back(){
    if (!empty()){
        //return elements[--size];

        //change capacity absed on rthe size
        if(size < capacity / 2){
           allocateMemory(capacity / 2);
        }

        return elements[--size];
    }
    else {
        throw "Empty vector" ;           // throw is an exception. an out of the ordinary occurence and we are not sure what to return
    }

}

int MyVector::getCapacity() const{
    return capacity;
}

int& MyVector::at(int index) const{
    if (index < 0 || index >= size){
        throw "At: out of bounds" ;
    }
    else {
        return elements[index];
    }
}