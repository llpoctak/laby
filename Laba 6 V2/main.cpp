#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <cmath>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    int n;
    unsigned long long Dob = 1;
    do {
        cout << "¬вед≥ть n(n<=15): ";
        cin >> n;
    } while (n>15 || n<=0);
    int A[n][n],B[n][n],X[n][n],Max[n];

    cout << "A = " << endl;

    srand(time(NULL));
    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            A[i][j]=rand()%11+1;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    cout << "B = " << endl;

    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            B[i][j]=rand()%28+1;
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    for (int i(0);i<n;i++)
    {
        Max[i] = B[i][0];
        for (int j(1);j<n;j++)
        {
            if (B[i][j]>Max[i])
            {
                Max[i] = B[i][j];
            }
        }
    }
    cout << "X = " << endl;
    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            Dob=A[i][j]*Max[i];
            X[i][j]=Dob;
            cout << X[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    return 0;
}
