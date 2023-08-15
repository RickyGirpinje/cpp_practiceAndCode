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
    int N;
    cin>>N;
    vector<int>v[N];

    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
        
    }
    for (int i = 0; i < N; i++)
    {
        printVector(v[i]);
    }
    
}

/*
output
3 
3
1 2 3
2
5 6
3
6 6 6


size : 3
1 2 3 
size : 2
5 6 
size : 3
6 6 6 
*/