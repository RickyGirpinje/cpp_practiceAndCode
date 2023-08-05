#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }  
    }
    int l1,r1;
    cin>>l1>>r1;
    int l2,r2;
    cin>>l2>>r2;

    int s = 0;
    for (int i = r1; i <= r2; i++)
    {
        for (int j = l1; j <= l2  ; j++)
        {
            s += arr[i][j];
        }
    }
    cout<<s;
    return 0;
    
}