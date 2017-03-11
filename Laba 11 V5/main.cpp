#include <iostream>
#include <conio.h>
#include <cstdlib>
#include "NewVector.h"

using namespace std;

int main()
{
    system("chcp 1251 > nul");

    int n;

    do {
        cout << "¬вед≥ть розм≥рн≥сть масиву A[n][n] n (n>0 ≥ n<16): ";
        cin >> n;
    } while (n<=0 || n>15);
    cout << endl;

    int** A;
    A = new int *[n];
    for (int i(0);i<n;i++)
    {
        A[i] = new int[n];
    }

    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            cout << "A[" << i << "][" << j << "]= ";
            cin >> A[i][j];
        }
        cout << endl;
    }
    cout << endl << endl;

    cout << "A = " << endl;
    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    int k=0;
    int B[k];

    Matrix(A,n,B,k);

    cout << "B = ";
    for (int i(0);i<k;i++)
    {
        cout << B[i] << " ";
    }
    cout << endl;

    for (int i(0);i<n;i++)
    {
        delete[] A[i];
    }
    delete[] A;

    return 0;
}
