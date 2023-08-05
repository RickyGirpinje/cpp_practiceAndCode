#include<iostream>
using namespace std;

//vectors are dynamic array(resize) ...  vectors are also store data in contiguous memory location.....😁😍

//for using the vector we need to add header file that is #include<vectors>
//Declaration of vector:-  vector<dataType> vector-name; //we dont need to declare size .....
// vector <dataType> vector_name(size); // if we want to declare size we can do that....

//vector<int>v;

/*
    Basic operations in Vectors....

    1)size:- v.size() -> to find length...

    2) resize :- v.resize(new size); -> to resize the vector...

    3)capacity:- v.capicity() ->[capacity>=size]

    4)push_back :- v.push_back(element) -> this is insert element at the end ..

    v.begin() -> starting element
    v.end() -> ending element



    5)insert :- v.insert(position,element) ->which postition you want to insert..
        ex:- [2,3,4]
        v.insert(v.begin()+2,5)
        [2,3,5,4]

    6)Delete :- v.popback() -> remove last element...

    7)erase :- v.erase(position) -> it will remove element of that position....
        ex :- [2,3,4,5]
        v.erase(v.end()-2)
        [2,3,5]
    8)clear :- v.clear() -> it clear the entire vector





*/