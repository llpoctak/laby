#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
    system("chcp 1251 > nul");

    int n;

    do {
        cout << "Введіть n (n<=200): ";
        cin >> n;
    } while (n>200 || n<0);

    int A[2*n];
    double Sum = 0,Sum1=0,serzn = 1;

    srand(time(NULL));

    cout << "A = ";
    for(int i(0);i<(2*n);i++)
    {
    A[i]=rand()%21+1;
    cout << A[i] << " ";
    }
    cout << endl << endl;

    for (int i(0);i<n;i++)
    {
        Sum1 += A[i];
    }
    serzn = Sum1/n;
    cout << "Середнє арифметичне : " << serzn << endl;

    for (int i=n;i<2*n;i++)
    {
        if (A[i]>serzn)
        {
           Sum += A[i];
        }
    }
    if (Sum == 0)
    {
        cout << "Чисел,які ,більші за сер.арифм. немає.";
    } else {
    cout << "Сума = " << Sum << endl;
    }
    return 0;
}
