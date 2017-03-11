#include <iostream>
#include <conio.h>
#include <time.h>
#include <cstdlib>
#include "Sum.h"
#include "X.h"

using namespace std;

int main()
{
    system("chcp 1251 > nul");

    int n,m;
    bool flag;

    do {
        cout << "¬вед≥ть розм≥рн≥сть масиву A[n](n<=300): ";
        cin >> n;
    } while (n<=0 || n>300);
    cout << endl;

    do {
        cout << "¬вед≥ть розм≥рн≥сть масиву B[m](m<=400): ";
        cin >> m;
    } while (m<=0 || m>400);
    cout << endl;

    int A[n],B[m];
    srand(time(NULL));

    cout << "A = ";
    for (int i(0);i<n;i++)
    {
        A[i]=rand()%11+1;
        cout << A[i] << " ";
    }
    cout << endl << endl;

    cout << "B = ";
    for (int i(0);i<m;i++)
    {
        B[i]=rand()%11+1;
        cout << B[i] << " ";
    }
    cout << endl << endl;

    int Size = 0,sum = 0;
    int X[Size];

    NewMass(flag,Size,n,m,X,A,B);
    cout << "ќб'Їднанн€ масив≥в: ";
    for (int i = 0; i < Size; i++) {
        cout << X[i] << " ";
    }
    cout << endl << endl;

    Sum(sum,Size,X);
    cout << "—ума = " << sum << endl;

    return 0;
}
