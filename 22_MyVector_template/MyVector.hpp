#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

template <typename T>
class MyVector {
public:
    //constructor
    MyVector(int capacity = 10);

    // Copy constructor
    MyVector(const MyVector& other);

    // Destructor
    ~MyVector();

    void print() const;
    void push_back(T& val);    // Add the new element at the end
    T pop_back();             // Removes the last element and returns its value
    
    bool empty() const;
    int getCapacity() const;
    T& at(int index) const;

    void clear();
    int getSize() const;
    void push_front(T& value);
    void insert(int pos, int value);

private:
    T* elements;      // An array of integers
    int size;           // The current number of elements
    int capacity;       // The max number of elements in the array

    bool full() const;

    void allocateMemory(int memory_size);
};

#include "MyVector.tpp"
#endif
