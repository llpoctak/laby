#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    cout << "<-----------------Лаба 9(Варіант 7)----------------->" << endl;
    int n,k=0,Size=0;
    bool  flag;

    do {
        cout << "Введіть розмірність масиву n (n<15): ";
        cin >> n;
        cout << endl;
    } while (n<=0 || n>15);

    int** X;
    int B[Size];
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

    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            if (X[i][k]>=X[i][j])
            {
                flag=0;
                if (j==(n-1))
                {
                    k++;
                }
                if (k==(n-1))
                {
                    k=0;
                }
                if (X[i][k]>=X[i][j+1])
                {
                    flag=1;
                }
            }
        }
        if (flag==1)
        {
            B[Size]=i;
            Size++;
        }
    }

    if (k==0)
    {
        cout << "Немає рядків елементи яких, утворюють спадну послідовність.";
    } else {
        cout << "Вектор B: ";
        for (int i(0);i<Size;i++)
        {
            cout << B[i] << " ";
        }
        cout << endl << endl;
    }

    for (int i(0);i<n;i++)
    {
        delete[] X[i];
    }
    delete[] X;

    return 0;
}
