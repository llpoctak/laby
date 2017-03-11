#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    int n,m;
    do {
        cout << "Введіть n (n<=100): ";
        cin >> n;
    }
    while (n>100);

    do {
        cout << "Введіть m (m<=10): ";
        cin >> m;
    }
    while (m>10);

    srand(time(NULL));

    int A[n*m],MaxMass[n],tempmax,Min;

    cout << "A = ";
    for (int i(0);i<(n*m);i++)
    {
        A[i]=rand()%21+1;
        cout << A[i] << " ";
    }
    cout << endl << endl;

    for (int i(0);i<n;i++)
    {
        tempmax = A[i*m];
        for (int j(0);j < m;j++)
        {
            if (A[i*m+j]>tempmax)
            {
                tempmax = A[i*m+j];
            }
            MaxMass[i] = tempmax;
        }
    }
    Min = MaxMass[0];
    for (int i(1);i<n;i++)
    {
        if (MaxMass[i]<Min)
        {
            Min = MaxMass[i];
        }
    }
    cout << "Мінімальне серед максимальних у кожній групі: " << Min <<  endl;
    _getch();
    return 0;
}
