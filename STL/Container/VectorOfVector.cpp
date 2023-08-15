#include<bits/stdc++.h>
using namespace std;

int printVector(vector<int>v)
{
    cout<<"size : "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++) //TC of v.size is O(1);
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<vector<int>>v;
    int N;
    cin>>N;
    for (int i = 0; i < N; i++)  //take input for nested vector...
    {
        int n;
        cin>>n;
        vector<int>temp;
        for (int j = 0; j < n; j++)
        {
            int x ;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        printVector(v[i]);
    }
    
    
}

/*
output

4
2
1 2
3
1 2 3
4
1 2 3 4
2
7 8


size : 2
1 2 
size : 3
1 2 3 
size : 4
1 2 3 4 
size : 2
7 8 

*/