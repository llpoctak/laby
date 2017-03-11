#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    int n,z=0;
    do {
        cout << "¬вед≥ть розм≥рн≥сть масиву n (n<=15): ";
        cin >> n;
    } while (n<=0 || n>15);

    int X[n][n];
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

    int Y[n][n],Dob[n*n],k=0,b=0,v=0;
    for (int k(0);k<n*n;k++)
    {
        for (int i(0);i<n;i++)
        {
            i=v;
            if (v>n*n)
            {
                break;
            } else {
            Dob[k]=0;
            for (int j(0);j<n;j++)
            {
                Dob[k] += (X[i][j])*(X[z][b]);
            }
            z++;
            if (z==(n-1))
            {
                z=0;
            }
            if (b==(n-1))
            {
                i--;
                b=0;
                v++;
            }
            b++;
            k++;
            }
        }
    }
    cout << "Y = " << endl;
    for(int i(0);i<n*n;i++)
    {
            cout << Dob[i] << " ";
    }
    cout << endl << endl;

    return 0;
}
