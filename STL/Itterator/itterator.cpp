#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {2,3,4,5,6};

    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i]<<" ";
    }
    
    //how to initilise iterator .....
    // container_name iterator :: iterator_name = initilise value ;..... suppose(v.begin());

    vector<int> :: iterator it = v.begin();

    // to access the value of iterator ....
    // cout<<(*it);
    // cout<<(*it+1); 

    //how to traverse vector using iterator

    for (it = v.begin(); it != v.end(); ++it)
    {
        cout<<(*it)<<endl;
    }


    // difference between  it++ and it+1;
    // it ++ :- next itterator
    // it + 1 :- next location (for maps & sets this operation is invalid) but you can use this in vector but still it++ is recomended ...... 



    vector<pair<int ,int>> v1 = {{2,3},{5,6},{8,9}};

    vector<pair<int,int>>:: iterator itt;

    for ( itt = v1.begin(); itt != v1.end(); itt++)
    {
        cout<<(*itt).first<<" "<<(*itt).second<<endl;
        cout<<itt->first<<" "<<itt->second<<endl;
    }
    
}