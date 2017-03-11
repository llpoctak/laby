#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    system("chcp 1251 > nul");

    int n;

    do {
        cout << "Введіть розмірність масиву n (n<=20): ";
        cin >> n;
    } while (n>20 || n<=0);

    int A[n][n],B[n];
    double Ser = 1,Sum = 0;
    srand(time(NULL));

    cout << "A = " << endl;
    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            A[i][j]=rand()%11+1;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    cout << "Вектор В = ";
    for (int i(0);i<n;i++)
    {
        Sum = 0;
        Ser = 1;
        for (int j(0);j<n;j++)
        {
            Sum+=A[i][j];
            Ser = Sum/n;
        }
        cout << Ser << " ";
    }
    cout << endl << endl;

    return 0;
}
