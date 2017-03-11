#include <iostream>
#include <conio.h>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251 > nul");

    int n;

    do {
        cout << "¬вед≥ть розм≥рн≥сть масиву n (n<=400): ";
        cin >> n;
    } while (n<=0 || n>400);

    int A[n];

    cout << "¬аш масив (A): ";
    srand(time(NULL));

    for (int i(0);i<n;i++)
    {
        A[i]=rand()%10+1;
        cout << A[i] << " ";
    }
    cout << endl << endl;
    int Max=0;
    bool flag;
    Max = A[0];
    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            if (i==j || A[i]!=A[j])
            {
                flag = 1;
                if (flag == 1)
                {
                     if (Max < A[i])
                     {
                         Max = A[i];
                     }
                }
            }
        }
    }
    cout << "Maксимальне з неповторюваних: " << Max <<endl;
    return 0;
}
