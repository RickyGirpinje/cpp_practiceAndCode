#include<iostream>
#include<math.h>
using namespace std;
//Find the second largest element of the array...😒😊

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max1 = INT16_MIN , max2 = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        
        if ( arr[i] > max1 )
        {
            max2 = max1;
            max1 = arr[i];
            // cout<<max1<<" "<<max2<<endl;
        }
        else if(max2 < arr[i] && arr[i]!=max1)
        {
            max2 = arr[i];
            // cout<<max2<<endl;
        }    
    }  

    cout<<max2<<endl; 
     
}