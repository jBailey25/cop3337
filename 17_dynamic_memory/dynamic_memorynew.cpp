#include <iostream>

// dynamic memory allocation: when we dont know how much memory will be used.
void printArr(int* arr, int size);
int* doubleArr(int* arr, int size);
int* doubleArrNew(const int* arr, int size);

int main(void) {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};

    printArr(arr, SIZE);

    int* double_array = doubleArr(arr, SIZE);
    printArr(double_array, SIZE);

    int* new_array = doubleArrNew(arr, SIZE);
    printArr(new_array, SIZE);

    for (int i = 0; i < 999999; i++){
        double* d = new double[99999]; //allocate new memory
        delete [] d; //deallocate memory, so run isnt terminated
    }
    // delete [];
    // heap is bigger than stack


    return 0;
}

void printArr(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int* doubletArr(int* arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] *= 2;
    }
    return arr;
}

int* doubleArrNew(const int* arr, int size){
    //int new_arr[size];
    // create a dynaic array

    int* new_array = new int[size];   // an array of size integers stored in the heap. new is a keyword. 
    for (int i = 0; i < size; i++){
        new_array[i] = new_array[i] * 2;
    }

    return new_array;

}

// static - global varibale storage, remains permanents for the entire run of the program
// stack - local varbale storage: automatically managed/allocated, super fast, but limited in size

// heap - dynamic storage: large pool of memory, not allocated in contiguos order: slower than stack, flexible size, manually managed
// dynamic memory allocation: the process of assignming memory space during thr execution/runtime.

// not deallocating gives a memory leak. 
// use 'new' operator 

// pointer = new datatype;
// Eg: int* p = new int(4);      char *c = new char;


// to delete:
//delete nameofpointer
// for array: delete []
// if there is no delallocation, the program will terminate due to the heap running out of space.


// to create a double pointer dynamicaly:
// double* pD = new double     OR   double* pD = new_double(10.2)
// delete the varible: delete pD

//cannot access a deleted allocated memory
// can ONLY delete a dynamically allcated memory.

//create an object of class car dynamically: Car* c = new Car;   creates by default a no argument constructor
                                            // *(c).name();      dereference takes precidence
                                        // OR   c->name;          more convient 

// create a string dynamically: std::string *s = new std::string("abc");
                                // to print the size: s->size();
