
//in this program there is a error same where try  to find and fix it.....

#include <iostream>
using namespace std;

int main()
{
    int r1, c1;
    cin >> r1 >> c1;
    int arr1[r1][c1];

    int r2, c2;
    cin >> r2 >> c2;
    int arr2[r2][c2];

    for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cin >> arr1[i][j];
            }
        }

        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cin >> arr2[i][j];
            }
        }

    if (c1 != r2)
    {
        cout << "marix multiplication is not possible....";
    }
   
        int ans[r1][c2];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
               ans[i][j] = 0;
                for (int k = 0; k < r2; k++)
                {
                    ans[i][j]+= arr1[i][k] * arr1[k][j];
                }
               
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    
}