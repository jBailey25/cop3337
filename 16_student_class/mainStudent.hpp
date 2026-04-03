#include "student.hpp"
#include <iostream>

int main(void){
    //Print the total number of students
    //dont need an object to acess the static property
    std::cout << "Total students: " << Student::getTotalStudents << std::endl;

    //create some students
     
    Students1("Anna", 2.9);
    std::cout << "Total students: " << Student::getTotalStudents << std::endl;

    Students2("Nick", 3.5);
    std::cout << "Total students: " << Student::getTotalStudents << std::endl;

    s1.print();
    s2.print();


    return 0;
}