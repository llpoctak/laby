#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    system("chcp 1251 > nul");

    int n,k=0,z=0;

    do {
        cout << "Введіть розмірність масиву n (n<=500): ";
        cin >> n;
    } while (n<=0 || n>500);

    int *A = new int [n];
    srand(time(NULL));

    cout << "A = ";
    for (int i(0);i<n;i++)
    {
        *(A+i)=rand()%21-11;
        cout << A[i] << " ";
    }
    cout << endl << endl;

    int sum=0,Size=0;
    bool flag;
    int B[n];

    for (int i(0);i<n;i++)
    {
        if (A[i]<0)
        {
            k=i;
            break;
        }
    }
    for (int j(n-1);j<n;--j)
    {
        if (A[j]<0)
        {
            z=j;
            break;
        }
    }

    for (int i(k+1);i<z;i++)
    {
        sum+=A[i];
    }

    if (k==z || (k-z==1 || z-k==1))
    {
        cout << "Немає чисел,що сумуються.";
    } else {
        cout << "Сума: " << sum << endl;
        }
    delete [] A;
    return 0;
}
