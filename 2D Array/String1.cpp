#include<iostream>
using namespace std;

long binarySubstring(int n, string a){
        int x;
        for(int i=0 ;i < n ;i++)
        {
            if(a[i]=='1')
            {
               x = i;
               break;
            }
        }
        int c = 0;
        int y = x+1;
        int i = y;
       while( i!=n )
       {
           if(a[i]=='1')
           {
               c++;
           }
           if(y==(n-2))
           {
               break;
           }
           if(i == (n-1))
           {
               i = y;
               y++;
           }
           i++;
       }
        return c;
    }

int main()
{
    int n;
    cin>>n;
    string count;
    for(int i=0;i<n;i++)
    {
        cin>>count;
    }
    cout<<binarySubstring(n,count);
}