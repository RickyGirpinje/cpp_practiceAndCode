#include<iostream>
#include<vector>
using namespace std;
//given Q queries, check if the given number is present in the array or not...

//Value of all the element in the array is less than 10 to the power 5...

int main()
{
    int n;
    cin>>n;

    vector<int>v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    cout<<"Enter queries:";
    int q;
    cin>>q;

    const int N = 1e5 +10;

    vector<int> freq(N,0);

    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }
    
    while (q--)
    {
        int queryelement;
        cin>>queryelement;
        cout<<freq[queryelement]<<endl;
    }
    

    return 0;
    
}