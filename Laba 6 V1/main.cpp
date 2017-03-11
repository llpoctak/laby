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
    do {
        cout << "¬вед≥ть n(n<=20): ";
        cin >> n;
    } while (n>20 || n<=0);
    int A[n][n],X[n];
    cout << "A = " << endl;
    srand(time(NULL));
    {
        for (int i(0);i<n;i++)
        {
            for (int j(0);j<n;j++)
            {
                A[i][j]=rand()%21-10;
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    cout << endl << endl;
    cout << "X = ";
    double Min=0,Max=0,Ser = 0;
    for (int i(0);i<n;i++)
    {
        Max = A[i][0];
        Min = A[i][0];
        for (int j(1);j<n;j++)
        {
            if (A[i][j]>Max)
            {
                Max = A[i][j];
            }
            if (A[i][j]<Min)
            {
                Min = A[i][j];
            }
        }
        Ser = (abs(Max) + abs(Min))/2;
            cout << Ser << " ";
    }
    cout << endl << endl;
    return 0;
}
