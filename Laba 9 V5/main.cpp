#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include "Sum.h"
#include "NewMass.h"

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    cout << "<-------------------------->" << endl;
    int n;
    do {
        cout << "¬вед≥ть розм≥рн≥сть масиву n (n<=15): ";
        cin >> n;
        cout << endl;
    } while (n<=0 || n>15);

    int A[n],B[n];

    int** X;
    X = new int *[n];
    for (int i(0);i<n;i++)
    {
        X[i] = new int[n];
    }
    srand(time(NULL));
    cout << "X = " << endl;
    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            X[i][j]=rand()%11+1;
            cout << X[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    Sum(n,(int **) X,int B,int A);
    NewMass(n,A,B);

    for (int i(0);i<n;i++)
    {
        delete[] X[i];
    }
    delete[] X;

    return 0;
}
