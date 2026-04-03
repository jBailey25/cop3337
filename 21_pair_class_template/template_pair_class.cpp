#include <iostream>

//template class
//default template parameters. 
template<typename T1 =int, typename T2 = double>
template<typename T1, typename T2>
class Pair{
    public:
    //constructor
    Pair (const T1& f, const T2& s) : first(f), second(s){

    }
    //getters
    const T1& getFirst() const{ // returns a constant T2 referece. more efficient
        return first;
    }

    const T2& getSecond() const{// returns a constant T2 referece. more efficient
        return second;
    }

    //setters
    void setFirst(const T1& val){
        first = val;
    }

    void setSecond (const T2& second){
        this->second = second;          //two different seconds
    }



    private:
        T1 first;
        T2 second;


};

//create a function that creates 2 args of anytype and returns a pair of those args
template<typename T1, typename T2>
Pair<T1, T2> createPair(const T1& v1, const T2& v2){
    return Pair<T1, T2> (v1, v2);
}

int main(void){
    //create pair object. template class that tajes an in 
    Pair<int, double> p1(1, 3.4);

    std::cout <<p1.getFirst() << " , " << p1.getSecond()<< std::endl; 

    Pair<std::string, char>p2 = createPair(std::string("Hello"), '!');
    std::cout <<p2.getFirst() << ", " << p2.getSecond()<<std::endl;

    auto p3 = createPair('a', 3);
    //creates a character and integer of type Pair
    std::cout <<p3.getFirst() << ", " << p3.getSecond()<<std::endl;
    //auto automatically calulates the type of the variable depending on the value
    //can create a Pair pair of type Pair

    Pair p4(5, 3.4);
    std::cout <<p4.getFirst() << ", " << p4.getSecond()<<std::endl;





    return 0;
}