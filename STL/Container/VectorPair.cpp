#include<bits/stdc++.h>
using namespace std;

int printVector(vector<pair<int,int>>v)
{
    cout<<"size :"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++) //TC of v.size is O(1);
    {
        cout<<v[i].first<<"  "<<v[i].second<<endl;
    }
}

int main()
{
    vector<pair<int ,int>>v = {{1,2},{3,4},{5,6}}; // this is how we can initilise the vector....
    int n;
    cin>>n;
    vector<pair<int ,int>>v1;
    for (int i = 0; i < n; i++)   //this is how we can take input of pair....
    {
        int x,y;
        cin>>x>>y;
        v1.push_back({x,y});
    }
    
    printVector(v);
    printVector(v1);

}