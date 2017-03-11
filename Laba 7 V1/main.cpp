#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    int n,m;
    bool flag;
    do {
        cout << "n(n<=500) = ";
        cin >> n;
    } while (n>500 || n<=0);

    do {
        cout << "m(m<=200) = ";
        cin >> m;
    } while (m>200 || m<=0);

    int *A = new int [n],*B = new int [m],sum = 0,Size = 0;
    srand(time(NULL));

    cout << "A = ";
    for (int i(0);i<n;i++)
    {
        *(A+i)=rand()%201+1;
        cout << A[i] << " ";
    }
    cout << endl << endl;

    cout << "B = ";
    for (int i(0);i<m;i++)
    {
        *(B+i)=rand()%201+1;
        cout << B[i] << " ";
    }
    cout << endl << endl;

    int C[999];
    for (int i(0);i<n;i++)
    {
        flag = 1;
        for (int k(0);k<Size;k++)
        {
            if (A[i]==C[k])
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            C[Size]=A[i];
            Size++;
        }
    }

    for (int i(0);i<m;i++)
    {
        flag = 1;
        for (int k(0);k<Size;k++)
        {
            if (B[i]==C[k])
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            C[Size]=B[i];
            Size++;
        }
    }
    cout << "Масив об'єднання: ";
    for (int i(0);i<Size;i++)
    {
        sum+=C[i];
        cout << C[i] << " ";
    }
    cout << endl << endl;
    cout << "Сума = " << sum << endl;
    delete [] A;
    delete [] B;

    return 0;
}
