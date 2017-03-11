#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include "Min.h"
#include "Symetr.h"

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    int n,m;

    do {
        cout << "Введіть розмірність масиву A[n] (n<300): ";
        cin >> n;
    } while (n<=0 || n>300);

    do {
        cout << "Введіть розмірність масиву B[m] (m<300): ";
        cin >> m;
    } while (m<=0 || m>400);

    int A[n],B[m];
    int Size=0;
    int C[Size];

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

    Symetriya(n,m,A,B,Size,C);

    cout << "C = ";
    for (int i(0);i<Size;i++)
    {
        cout << C[i] << " ";
    }
    cout << endl << endl;

    int Min=0;

    Minimalne(Size,C,Min);

    cout << "Мінімальне: " << Min << endl;
    return 0;
}
