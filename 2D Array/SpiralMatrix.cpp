#include<iostream>
using namespace std;

int main()
{
    int m,n;

    cin>>m>>n;
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }       
    }
    // first take 4 pointer top, down , left right
    int a=0 , b=n;
    int x = 0 ,y = m;

    for (int i = 0; i < m; i++)
    {
        for (int j = a; j < b; j++)
        {
            if (j==(b-1))
            {
                a = i;
                b = m;
            }
            
            
            cout<<arr[i][j];
            
        }
        
    }
    
    
}