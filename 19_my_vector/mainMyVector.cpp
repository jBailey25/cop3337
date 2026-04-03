#include "MyVector.hpp"
#include <iostream>


int main(void){
    // create MyVector object dynamically
    MyVector* mv = new MyVector(25);

    for (int i = 0; i < 5; i++){
        mv->push_back(i * i);
    }

    mv->at(0) = 10;
    std::cout << "The first element is: " << mv->at(0) << std::endl;

    //print values using create dprint method
    while(!mv->empty()){
        std::cout << "Capacity: " << mv->getCapacity() << std::endl;
        std::cout << mv->pop_back() << std::endl;
        mv->print();
    }
    
    delete mv;



    return 0;
}