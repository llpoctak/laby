#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include "Sum.h"
#include "NewMass.h"

using namespace std;

int main()
{
    cout << "--------------------------------------------" << endl << endl;
    system("chcp 1251 > nul");

    int n,m,Size=0;
    double Sum1=0;

    do {
        cout << "¬вед≥ть розм≥рн≥сть масиву n (n<=300): ";
        cin >> n;
        cout << endl;
    } while (n<=0 || n>300);

    do {
        cout << "¬вед≥ть розм≥рн≥сть масиву m (m<=100): ";
        cin >> m;
        cout << endl;
    } while (m<=0 || m>100);

    int A[n],B[m],X[Size];

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

    NewMass(n,m,X,Size,A,B);
    Sum(X,Size,Sum1);
    return 0;
}
