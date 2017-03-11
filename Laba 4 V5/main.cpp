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
        cout << "Введіть n (Від 1 до 300)= ";
        cin >> n;
    }
    while (n > 300 || n <= 0);
    int X[n],Y[n],Z[n];
    srand (time(NULL));
    cout << "X = ";
    for (int i=0;i<n;i++)
    {
        X[i]=rand()%10+1;
        cout << X[i] << " ";
    }
    cout <<endl<<endl;
    cout << "Y = ";
    for (int i=0;i<n;i++)
    {
        Y[i]=rand()%10+1;
        cout << Y[i] << " ";
    }
    cout << endl<<endl;
    cout << "Z = ";
    int Size = 0;
    bool alert = false;
    for (int i(0);i<n;i++)
    {
        alert = false;
        for (int k = 0; k < Size; k++)
        {
            if (X[i] == Z[k])
            {
                alert = true;
            }
        }
        if (!alert)
        {
            Z[Size] = X[i];
            Size++;
        }
        alert = false;
        for (int k = 0; k < Size; k++)
        {
            if (Y[i] == Z[k])
            {
                alert = true;
            }
        }
        if (!alert)
        {
            Z[Size] = Y[i];
            Size++;
        }
    }
    for (int i(0);i<Size;i++)
    {
        cout << Z[i] << " ";
    }
    cout << endl << endl;
    unsigned long long Suma = 0,Dob = 1;
    for (int i = 0;i < Size; i++)
    {
        Suma+=Z[i];
        Dob*=Z[i];
    }
    cout << "Сума елементів об'єднання двох масивів: " << Suma << endl;
    cout << "Добуток елементів об'єднання двох масивів: " << Dob << endl;
    _getch();
    return 0;
}

