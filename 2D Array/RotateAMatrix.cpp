#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int arr2[m][n];
    
    for (int i = 0; i < m; i++)
    {
        int k = 0;
        for (int j = m - 1; j >= 0; j--)
        {
            arr2[i][k] = arr[j][i];
            k++;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}