#include <iostream>
#include <string>
#include "student.hpp"



// initialize/define the static data member (REQUIRED!!!!)  otherwise, will not compile, 
int Student::total_students = 0;
int Student::next_id = 1000;
double Student::goodGPA = 2.0;


Student::Student(const std::string& n, double g) : name(n), gpa(g){
       total_students++;
       id = "U00000" + std::to_string(next_id);  //to_string converts an int to a string
       next_id += 5;
   }


int Student::getTotalStudents(){
    return total_students;
}

/* static void setGraduationRequirement(double new_GPA){
    if (GPA > 2.0 && GPA < 4.0){

    }
    gpa = new_GPA;
}*/ 

bool Student::canGraduate(double gpa){
    if (gpa > goodGPA){
        return true;
    }
    else{
        return false;
    }
}

void Student::print() const {
    std::cout << '\n';

    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
    std::cout << "Can graduate: " << (canGraduate(gpa) ? "Yes" : "No" )

    std::cout << '\n';

    

}