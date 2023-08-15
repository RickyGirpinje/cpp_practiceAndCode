#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={2,3,4,5,6};

    // this we can do with all containers..... maps,sets...etc
    //this loop is called range based loop

    // In the range based loop copy of variable is pass ..... if want to pass actual variable then make &value(make the value variable refrence)
    for(int value : v)
    {
        cout<<value<<endl;
    }


    //you can also do this for pair...

    vector<pair<int , int>>v1 = {{1,2},{5,6},{8,7}};

    for(pair<int,int>&values : v1){
        cout<<values.first<<" "<<values.second<<endl;
    }
}