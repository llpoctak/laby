#include <iostream>
#include <conio.h>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    int n;
    bool flag1 = 1,flag2 = 1;
    int Size1 = 0,Size2 = 0;

    do {
        cout << "Введіть розмірність масиву n (n<=500): ";
        cin >> n;
    } while (n<=0 || n>500);

    int A[n],B[n],Z[n];

    cout << "Ваш масив (A): ";
    srand(time(NULL));

    for (int i(0);i<n;i++)
    {
        A[i]=rand()%10+1;
        cout << A[i] << " ";
    }
    cout << endl << endl;

    unsigned long long Dob = 1,Sum = 0;

    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            if (i==j || A[i]!=A[j])
            {
                flag1 = 1;
                for (int k(0);k<Size1;k++)
                {
                    if (A[i]==B[k])
                    {
                        flag1 = 0;
                    }
                }
                if (flag1 == 1)
                {
                    B[Size1]=A[i];
                    Size1++;
                }
            }
        }
    }
    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            if (i!=j && A[i]==A[j])
            {
                flag2 = 1;
                for (int k(0);k<Size2;k++)
                {
                    if (A[i]!=Z[k] && i==k)
                    {
                        flag2 = 0;
                    }
                }
                if (flag2 == 1)
                {
                    Z[Size2]=A[i];
                    Size2++;
                }
            }
        }
    }
    cout << "B = ";
    for (int i(0);i<Size1;i++)
    {
        Dob*=B[i];
    }
    for (int i(0);i<Size1;i++)
    {
        cout << B[i] << " ";
    }
    cout << endl << endl;
    cout << "Z = ";
    for (int i(0);i<Size2;i++)
    {
        Sum+=Z[i];
    }
    for (int i(0);i<Size2;i++)
    {
        cout << Z[i] << " ";
    }
    cout << endl << endl;
    cout << "Добуток неповторюваних: " << Dob <<endl;
    cout << "Сума повторюваних: " << Sum << endl;
    return 0;
}
