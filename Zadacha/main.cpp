#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    system("chcp 1251 > nul");

    int n,k=1,b=0;
    cout << "¬вед≥ть розм≥рн≥сть ≥грового пол€: ";
    cin >> n;
    int A[n][n];
    srand(time(NULL));
    cout << "≤грове поле: " << endl;
    for (int i(0);i<n;i++)
    {
        cout << "| ";
        for (int j(0);j<n;j++)
        {
            A[i][j]=rand()%2+0;
            if (A[i][j]==1)
            {
                b++;
            }
            if (A[i][j]==1 && b>1)
            {
                A[i][j]=0;
            }
            cout << A[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << endl << endl;

    for (int i(0);i<n;i++)
    {
        cout << "| ";
        for (int j(0);j<n;j++)
        {
            if (A[i][j]==1)
            {
                A[i][j+1]=1;
                A[i][j-1]=1;
                A[i-1][j]=1;
                A[i+1][j]=1;
                A[i-1][j-1]=1;
                A[i+1][j-1]=1;
                A[i-1][j+1]=1;
                A[i+1][j+1]=1;
            }
            cout << A[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << endl << endl;

    return 0;
}
