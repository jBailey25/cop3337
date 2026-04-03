#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

class MyVector {
    public:
    MyVector(int capacity = 10);        // could create an object using arg or no arg: MyVector(100) creates an object woth capacity 100, Myvector; created an arg with capacity 10
    MyVector(const MyVector& other);    // copy constructor -> used when we create a duplicate of an object


    // destructor 
    ~MyVector();

    void print() const;

    void push_back(int val);    //add the new element at the end

    int pop_back();     // removes the last element and returns its value. cant be constand cuz it chnages the array

    bool empty() const;

    int getCapacity() const;

    int* at(int index) const;  //checks the bounderies. cannot return a value outside of the vector

    //to do
    // create:
    // int thirdMax() const;
    // returns the 3rd disctinct max value from the vector 
    // if no 3rd max, return max value 


    private:
        int* elements;  // as an array of integers
        int size;      // current num of elements in vector, can be less that capacity. 
        int capacity;    // max number of elements in the array

        bool Full() const; // no one ele 
        void allocateMemory(int memory_size);

};


#endif
