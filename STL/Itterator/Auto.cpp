#include<bits/stdc++.h>
using namespace std;

int main()
{
    //auto keyword automatically or dynamically assign datatype for variable .....
    auto i =1;
    cout<<i<<endl;
    auto j = 1.2; //it initilise float dynamically ...
    cout<<j<<endl;

    // as we seen we can short the code for iterators 


    /***** for itterator ******/
    vector<pair<int ,int>> v1 = {{2,3},{5,6},{8,9}};

    // vector<pair<int,int>>:: iterator itt;   we do not have to define this huge line 
    // it automatically define the variable for pair
    for ( auto itt = v1.begin(); itt != v1.end(); itt++)
    {
        cout<<(*itt).first<<" "<<(*itt).second<<endl;

        // cout<<itt->first<<" "<<itt->second<<endl; you can also use this .... both are right
        // (*itt).first <=> itt->first
       
    }


    /****for range based loop*****/

    // for(pair<int,int>&values : v1){              //instead of this 
    //     cout<<values.first<<" "<<values.second<<endl;
    // }
    //we can do this .....
    for(auto &values : v1){
        cout<<values.first<<" "<<values.second<<endl;
    }

}