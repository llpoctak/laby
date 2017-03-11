#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    int n;
    bool flag;
    unsigned long long Dob=1,Sum=0;

    do {
        cout << "Введіть розмірність масиву n (n<=300): ";
        cin >> n;
    } while (n>300 || n<=0);
    cout << endl << endl;

    int *A = new int [n];

    for (int i(1);i<=n;i++)
    {
        cout << "A[" << i << "]= ";
        cin >> A[i];
    }
    cout << endl << endl;

    cout << "A = ";
    for (int i(1);i<=n;i++)
    {
        cout << A[i] << " ";
    }
    cout << endl << endl;

    for (int i(1);i<=n;i++)
    {
        for (int j(1);j<=n;j++)
        {
            if (A[i]<A[j])
            {
                flag=0;
                i++;
                j++;
                if (A[i]<=A[j])
                {
                    flag=1;
                }
            }
        }
    }
        for (int i(1);i<=n;i++)
        {
            if (flag==1)
            {
                Dob*=A[i];
            }
            if (flag==0)
            {
                Sum+=A[i];
            }
        }
        if (Dob!=1)
        {
            cout << "Добуток = " << Dob << endl;
        }

        if (Sum!=0)
        {
            cout << "Сума = " << Sum << endl;
        }
    return 0;
}
