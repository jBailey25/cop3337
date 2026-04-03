#ifndef POINT_HPP
#define POINT_HPP

#include <string>

class Point {
    public:
        Point(int x = 0, int y = 0);
        // Relational operators
        bool operator==(const Point& other) const;
        bool operator!=(const Point& other) const;
        // Operator []
        int& operator[](int index);

        std::string toString()const;

        // arithmetic operator
        Point& operator+ (const Point&other) const;
        Point& operator* (const Point&other) const;
        Point& operator- (const Point&other) const;

        //
        Point& operator+=(const Point&other) const;



        //pre increment 
        Point operator++();

        //post increment
        Point operator++(int); //uses an int inside the parameter do differencit=ate it from the preincrement

    private:
        int x, y;
};

#endif