#include <iostream>
#include <string>

class Hello{
    public:
        // no argument constructor 
        Hello() : size(0), messages(nullptr) {                             // initializer list. null pointer prevents initializing with a random adress and prevents dereferencing becasue it points to nothing
            std::cout << "No arg constructor for " << this << std::endl;
            // "this" automatically stored the adress of the object itself, is basically a pointer to the object that will never change. automatic pointer that points to the current object
            //(*this).radius is the same as this-> radius. 
        }

        // construcotr with args
        Hello (int n) : size(n) {
            std::cout << "constructor for " << this << std::endl;
            messages = new std::string[size];
            //initialize a dynamic array
            for (int i = 0; i < size; i ++){
                messages[i] = (i % 2 ) ? "Welcome! " : "Not welcome :( ";
            }

        }
        //copy constuctor ; every class has a default copy constuctor
        Hello(const Hello& other){ //other is what we want to copy from
            std::cout << "copy constructor for " << this << std::endl;
            size = other.size;
            // allocate new memory
            messages = new std::string[size];
            // copy the values
            for (int i = 0; i < size; i++){
                messages[i] = other.messages[i];
            }

        }

        //create a destructor
        // is the opposite of a constructor: deletes an object; every class has a destructor 
        // tilda (~) then classname ():    ~ClassName();
        ~Hello(){
            std::cout << "destructor for " << this << std::endl;
            if (messages){
                delete [] messages;
            }

        }

        //create a void method
        void bye() const { // const method cannot modify the members of the class
            std::cout << "Bye!!!\n";
        }


    private:
        std::string* messages;
        int size;


};

int main(void){
    // Create Hello object dynamically 
    Hello* hi = new Hello;

    //call the bye method
    hi->bye();

    //create an object with arg constructor
    Hello* hi2 = new Hello(10);


    // deallocate the memory
    delete hi;
    delete hi2;

    /*for (int i = 0; i < 100; i++){
        Hello(9999999);
    }*/

    //create 2 more objects
    Hello hi3(20);
    Hello hi4 = hi3; // hi 4 points to the same memory location as hi3. hi4 has no constructor. it was made using a default copy constructor, which was never created, so the prgram dumps. 

    // to fix:
    // allocate new memory for hi4, and copy in the values of hi 3 as well. therefore, if hi3 is deleted, hi4 still exists

    // if a class allocates memory, must remember to deallocate!!
    // deep copy
    // shallow copy


    return 0;
}