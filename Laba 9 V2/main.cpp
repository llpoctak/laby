#include <iostream>
#include <conio.h>
#include <time.h>
#include <cstdlib>
#include "Dob.h"
#include "X2.h"

using namespace std;

int main()
{
    system ("chcp 1251 > nul");

    int n;

    do {
        cout << "Введіть розмірність масиву X[n][n] (n<=15): ";
        cin >> n;
    } while (n<=0 || n>15);
    cout << endl
    ;
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
    unsigned long long Dob[n];

    NewMass(n,(int**) X,Dob);

    cout << "Добутки елементів рядків: ";
    for (int i(0);i<n;i++)
    {
        cout << Dob[i] << " ";
    }
    cout << endl;

    X2(n,(int**) X,Dob);

    for (int i(0);i<n;i++)
    {
        delete[] X[i];
    }
    delete[] X;

    return 0;
}
