#include<iostream>
using namespace std;

//Find the total number of pair in array whose sum is equal to the given value x.....❤️😁

//Example:- [3,4,6,7,1] , target_sum = 7 , then  find the total number of pair whose sum is 7......😍😒

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int te;
    cin>>te;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<=te)
            {
                if (te == arr[i]+arr[j])
                {
                    cout<<arr[i]<<" "<< arr[j]<<endl;
                    count++;
                } 
            }
            
        }
        
    }
    cout<<"total number of pairs is "<<count<<endl;
    
    
}