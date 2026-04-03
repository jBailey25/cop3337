// header file
#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include <iostream>


class Student {
    
        public:
        //constructor for student
        Student(const std::string& n, double g);
        
        //get function
        static int getTotalStudents();

        //setFunction
        //static void setGraduationRequirement(double new_GPA); //should check that its greater

        void canGraduate(double gpa);

        
        void print() const;




    private:
    
        static int total_students;
        std::string name;
        double gpa;
        static int next_id;
        std::string id;
        static double goodGPA;

        


};



#endif