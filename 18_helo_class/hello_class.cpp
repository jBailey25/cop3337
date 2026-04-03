#include <iostream>

class Hello{
    public:
        // no argument constructor 
        Hello(){
            std::cout << "No arg constructor for " << this << std::endl;
            // "this" automatically stored the adress of the object itself, is basically a pointer to the object that will never change
        }

        //create a void methoc
        void bye() const { // const method cannot modify the members of the class
            std::cout << "Bye!!!\n";
        }


    private:


};

int main(void){
    // Create Hello object dynamically 
    Hello* hi = new Hello;

    //call the bye method
    hi->bye();


    // desllocate the memory
    delete hi;


    return 0;
}