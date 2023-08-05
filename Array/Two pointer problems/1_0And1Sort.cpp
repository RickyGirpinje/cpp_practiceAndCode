#include<iostream>
using namespace std;
//Sort an Array consist of only 0 and 1....😁😊

//Example:- [1,1,0,0,1,0,1,0] after sorting [0,0,0,0,1,1,1,1]

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            count++;
        }  
    }
    for (int i = 0; i <=count; i++)
    {
        arr[i]=0;
    }
    for (int i = count+1; i < n; i++)
    {
        arr[i] = 1;
    }
    
    
    
    
}