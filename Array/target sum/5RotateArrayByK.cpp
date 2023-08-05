#include <iostream>
using namespace std;

// Rotate the given array 'a' by k steps, where k is non negative. Note:- k can be greater than n as well wher n is size of array 'a'....😒👍

// Example:- [1,2,3,4,5] , k =2  output = [4,5,1,2,3]

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int count = 1;
    int a = 0;
    int b = n - 1;

    while (count <= k)
    {
        
        // cout << arr[a] << " " << arr[b] <<" "<<count<<endl;
        
        swap(arr[a], arr[b]);

        a++;
        b--;
        count++;
        
        if (a> n - 1 || b < 0)
        {
            a = 0;
            b = n - 1;
            // cout << "sw"<<arr[a] << " " << arr[b] <<" "<<count<<endl;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}