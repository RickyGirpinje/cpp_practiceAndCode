#include<bits/stdc++.h>
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

int main()
{
    vector<int>v;
    // we can also take double of vector :- vector<double>
    // we can als take pair of vector :- vector<pair<int,string>>....etc

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x) ;  //time complexity of push_back is O(1)
    }

    for (int i = 0; i < v.size(); i++) //TC of v.size is O(1);
    {
        cout<<v.size()<<endl;
    }
    
    
}