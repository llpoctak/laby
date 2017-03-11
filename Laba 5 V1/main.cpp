#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    system("chcp 1251 > nul");

    bool alert = false;
    int n,m;
    int Size = 0,Size1 = 0;
    bool alert1 = false;

    do {
        cout << "¬вед≥ть n(n<=300): ";
        cin >> n;
    } while (n>300 || n<=0);

    do {
        cout << "¬вед≥ть m(m<=200): ";
        cin >> m;
    } while (m>200 || m<=0);

    int A[n],B[m],C[n],D[n];
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

    cout << "C = ";
    for (int i(0);i<n;i++)
    {
        alert = false;
        for (int k = 0; k < Size1; k++)
        {
            if (A[i] == C[k])
            {
                alert = true;
            }
        }
        if (!alert)
        {
            C[Size1] = A[i];
            Size1++;
        }
    }
    for (int i(0);i<m;i++)
    {
        alert = false;
        for (int k = 0; k < Size1; k++)
        {
            if (B[i] == C[k])
            {
                alert = true;
            }
        }
        if (!alert)
        {
            C[Size1] = B[i];
            Size1++;
        }
    }
    for (int i(0);i<Size1;i++)
    {
        cout << C[i] << " ";
    }
    cout << endl << endl;
    cout << "—иметрична р≥зниц€: ";
    for (int i(0);i<n;i++)
    {
        for (int j(0);j<m;j++)
        {
            alert1 = true;
            for (int v(0);v<Size;v++)
            {
                if (!alert1)
                {
                    D[Size] = C[Size1];
                    Size++;
                }
            }
        }
    }
    for (int i(0);i<Size;i++)
    {
        cout << D[i] << " ";
    }
    cout << endl << endl;
    return 0;
}
