#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    system ("chcp 1251 > nul");

    int n,k=0;

    do {
        cout << "Введіть n (n<=200): ";
        cin >> n;
    }
    while (n>200 || n<=0);

    k=2*n;
    int *A = new int [2*n];
    srand(time(NULL));

    cout << "A = ";
    for (int i(0);i<(2*n);i++)
    {
        *(A+i)=rand()%11+1;
        cout << A[i] << " ";
    }
    cout << endl << endl;

    int Max = 0,tempmin,Minmass[n];

    for (int i(0);i<n;i++)
    {
        tempmin = A[i];
        for (int j(i);j<k;j++)
        {
            if (A[j]<tempmin)
            {
                tempmin = A[j];
            }
            Minmass[i] = tempmin;
        }
        k--;
    }

    Max = Minmass[0];
    for (int i(1);i<n;i++)
    {
        if (Minmass[i]>Max)
        {
            Max = Minmass[i];
        }
    }
    cout << "Мaксимальне серед мінімальних: " << Max <<  endl;

    delete [] A;
    return 0;
}
