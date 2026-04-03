#include <iostream>
#include <string>
#include <vector>

//template - allows a function to accept any type template: <typename nameoftypename> 
// can also create template classes
// can define generic types for classes
/* template<typename T>
    class Stack{
    
    };


*/


//template prototype. putting this on top of function becomes a template function
template <typename T>
T smallest(const T& n1, const T& n2, const T& n3);

template <typename T>
void print(const T& value);

void print(bool value);

template <typename T>
T findMax (const std::vector<T>& v);

//TO DO:
// test find max (use different vectors, ints, strings, ect)


int main(void){
    int i1 = 1;
    int i2 = -23;
    int i3 = 55;


    // call the template fucntion, passing 3 int values
    std::cout << smallest(i1, i2, i3) << std::endl;
    std::cout << smallest(12.3, -4.5, 9.4) << std::endl;
    std::string s1 = "apple";
    std::string s2 = "banana";
    std::string s3 = "peanut";
    std::cout << "Smallest: " << smallest(s1, s2, s3) << std::endl;


    //test print fucntion
    print(123); //calls template function
    print( 1 < 2); //calls boolean version


    // Test findMax function with integers
    std::vector<int> v1 = {1, 5, 7};
    std::cout << "Int vector max: " << findMax(v1) << std::endl;

    // Test findMax function with strings
    std::vector<std::string> v2 = {"elephant", "Zebra", "aardvark"};
    std::cout << "String vector max: " << findMax(v2) << std::endl;

    // Test findMax with chars
    std::vector<char> v3 = {'H', 'x', 'k'};
    std::cout << "Char vector max: " << findMax(v3) << std::endl;






    return 0;
}

//implement function
template <typename T>
T smallest(const T& n1, const T& n2, const T& n3){

    if(n1 <= n2 && n1<= n3){
        return n1;
    }
    else if(n2 <= n3){
        return n2;
    }
    else{
        return n3;
    }

}

template <typename T>
void print(const T& value){
    std::cout << "Generic: " << value << std::endl;
}

void print(bool value){
    std::cout << "Boolean: " << (value ? "true" : "false" ) << std::endl;

}

template <typename T>
T findMax (const std::vector<T>& v){
    if (v.empty()){
        //throw an exception
        throw std::string("findMax: empty vector.");
    }
    
    T max = v[0];
    for(const T& el : v){
        if ( el > max){
            max = el;
        }
    }

    return max;
}