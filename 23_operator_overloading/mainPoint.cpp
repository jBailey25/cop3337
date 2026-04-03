#include "point.hpp"
#include <iostream>


int main (void) {

	Point p2 (3, 4);
	Point p2 (5, 4);
	Point p3 (82, 70);


    std::cout << p3.toString()<< std::endl;

    Point p4 = p1 + p2;
    std::cout<< "p4" + p4.to_string() << std::endl;

    int x = 1;
    (x += 2) += 5;
   

	// compare the two points
	// compiler does not know how to compare 2 objects
	if (p1 != p2){
		std::cout << (char) p3(0);
	}
	else {
		std::cout << (char) p3(1);
	}


	//you cannot modify the return type of what the operator return
	p1[0] = 52 + 33;
	std:: cout << (char) p1[0];

	std::cout << “FB7\n”;
	

	return 0;

    // TO DO
    // test all assignment operators

}
