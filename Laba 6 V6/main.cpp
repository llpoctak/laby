#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    system("chcp 1251 > nul");

    int n,k=0,z=0;

    do {
        cout << "Введіть розмірність масиву n (n<=20): ";
        cin >> n;
    } while (n>20 || n<=0);

    int A[n][n],B[n][n],X[n];
    double Ser = 1,Sum = 0;
    srand(time(NULL));

    cout << "A = " << endl;
    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            A[i][j]=rand()%21-11;
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
            B[i][j]=rand()%21-11;
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    cout << "Вектор X = ";
    for (int i(0);i<n;i++)
    {
        k=0;
        z=0;
        for (int j(0);j<n;j++)
        {
            if (A[i][j]!=0)

            {
                if (A[i][j]<0)
                {
                    k++;
                }
            }
                if (B[i][j]!=0)
                {
                    if (B[i][j]<0)
                    {
                        z++;
                    }
                }
        }
        if (k==z)
        {
            X[i]=true;
        } else
        {
            X[i]=false;
        }
        cout << X[i] << " ";
    }
    cout << endl << endl;
    return 0;
}
