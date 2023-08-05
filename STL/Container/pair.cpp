#include<iostream>
using namespace std;

// Pair is the class of c++ it store 2 values...
//declaration:-
/*
suppose we want the pair of int and string 

pair<int,string>p
*/

//Now how to put values in pair ... for this we have two method.....


int main()
{
    pair<int,string>p;
    
    // p = make_pair(2,"abc");   (1st method)
    //now to print this two value we have inbuid method .first and .second;

    p = {2,"abc"};              //(2nd method)
    cout<<p.first<<" "<<p.second;

    pair<int,string>p1;
    //how to take  pair as input....
    cin>>p1.first;
    cin>>p1.second;

    cout<<p1.first;
    cout<<p1.second;

    
}