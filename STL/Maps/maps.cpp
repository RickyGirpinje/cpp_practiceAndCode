#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int ,string>m;
    map<int ,string>::iterator it;

    m[1] = "abc"; 
    m[5] = "lom"; //TC 0(log n)
    m[3] = "tax"; 
    m.insert({4,"xyz"});

    for ( it = m.begin(); it != m.end(); it++)
    {
        cout<<(*it).first <<" "<<(*it).second<<endl;
        //we can also use (it->first)
    }
    //key will be print in sorted order....
    

    //insertion and accessing time complexity of map is O(log n)

}