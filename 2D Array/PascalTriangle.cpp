#include<iostream>+
using namespace std;

int facto(int n)
{
    int s =1;
    for (int i = 1; i <= n; i++)
    {
         s = s*i;
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n-(i+1); k++)
        {
            cout<<" ";
        }        
        for (int j = 0; j <=i; j++)
        {
            cout<<facto(i)/(facto(j)*facto(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}