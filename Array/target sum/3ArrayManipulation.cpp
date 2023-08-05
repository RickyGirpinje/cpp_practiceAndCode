#include<iostream>
using namespace std;
//find the unique nummber in a given array where all the elements are being repeated twice with one value being unique.....😊😊

//Example:- arr = [2,3,1,3,2,4,1] , output:- the unique number is 4.
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int unique = arr[0];
    for (int i = 1; i < n; i++)
    {
        unique = unique xor arr[i];
    }
    cout<<"the unique element is "<<unique;
    return 0;
}