#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <math.h>
#include <time.h>

using namespace std;

int main()
{
    system("chcp 1251 > nul");

    int n;

    do {
    cout << "Введіть розмірність масиву : ";
    cin >> n;
    } while (n>200);

    srand(time(NULL));

    int A[n];
    cout << "A = ";
    for (int i(0);i<n;i++)
    {
        A[i]=rand()%20+1;
        cout << A[i] << " ";
    }
    cout << endl << endl;

    int B[n];
    int Size=0;
    bool flag;
    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            if (i!=j && A[i]==A[j])
            {
                flag = 1;
                for (int k(0);k<Size;k++)
                {
                    if (A[i]==B[k])
                    {
                        flag = 0;
                    }
                }
                if (flag == 1)
                {
                    B[Size]=A[i];
                    Size++;
                }
            }
        }
    }
    if (Size==0)
    {
        cout << "Немає повторюваних чисел в масиві." << endl;
    } else {cout << "B = ";};
    for (int i(0);i<Size;i++)
    {
        cout << B[i] << " ";
    }
    cout << endl << endl;
    return 0;
}
