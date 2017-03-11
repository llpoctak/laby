#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    system("chcp 1251 > nul");

    int n,Max = 0;

    do {
        cout << "Введіть розмірність масиву n (n<=20): ";
        cin >> n;
    } while (n>20 || n<=0);

    int A[n][n];
    srand(time(NULL));

    cout << "A = " << endl;
    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            A[i][j]=rand()%201+1;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    Max = A[0][0];
    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            if (A[i][j]>Max)
            {
                Max = A[i][j];
            }
        }
    }
    cout << "Максимальне = " << Max << endl << endl;

    A[0][0] = Max;

    cout << "Новий масив : " << endl;
    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            cout << A[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    return 0;
}
