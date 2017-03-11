#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <cmath>

using namespace std;

int main()
{
    system("chcp 1251 > nul");

    int n,k=0,z=0;

    do {
        cout << "¬вед≥ть n(n<=15): ";
        cin >> n;
    } while (n>15 || n<=0);
    int X[n][n],L[n];

    cout << "X = " << endl;

    srand(time(NULL));
    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            X[i][j]=rand()%21-10;
            cout << X[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    cout << "L = ";
    for (int i(0);i<n;i++)
    {
        k=0;
        z=0;
        for (int j(0);j<n;j++)
        {
            if (X[i][j]!=0)
            {
                if (X[i][j]<0)
                {
                    k++;
                }
                if (X[i][j]>0)
                {
                    z++;
                }
            }
        }
        if (k>z)
        {
            L[i]=true;
        }
        if (k<z)
        {
            L[i]=false;
        }
        cout << L[i] << " ";
    }
    cout << endl << endl;

    return 0;
}
