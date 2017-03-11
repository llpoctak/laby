#include <iostream>
#include <time.h>
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    int a,b;
    do {
        cout << "Введіть а та b (a<b): ";
        cin >> a >> b;
    }  while (a>=b);

    int n;

    do {
        cout << "Введіть n (n <= 200): ";
        cin >> n;
    } while (n > 200);
    srand(time(NULL));
    int X[n];
    cout << "X = ";
    for (int i(0);i<n;i++)
    {
        X[i]=rand()%15+1;
        cout << X[i] << " ";
    }
    cout << endl << endl;
    int sum=0;
    unsigned long long dob=1;
    for (int i(0);i<n;i++)
    {
        if(X[i]<a)
        {
        sum +=X[i];
        }
    }
    for (int i(0);i<n;i++)
    {
        if(X[i]>b)
        {
        dob *=X[i];
        }
    }
    int Max=0,Min=9999999;
    int k=0;
    int z=0;
    for (int i(0);i<n;i++)
    {
        if ((X[i]<a || X[i]>b))
        z++;
    }
    for (int i(0);i<n;i++)
    {
        if ((X[i]>=a && X[i]<=b))
        k++;
    }
    for (int i(0);i<n;i++)
    {
        if(X[i]>Max && (X[i]>=a && X[i]<=b))
        {
        Max=X[i];
        }
        if(X[i]<Min && (X[i]>=a && X[i]<=b))
        {
        Min=X[i];
        }
    }
    if (z==0)
    {
        cout << "Чисел,які знаходяться поза проміжком - немає." << endl;
    };
    if (k==0)
    {
        cout << "Чисел,які належать даному проміжку - немає." << endl;
    };
    if (Max==0)
    {
        cout << "Максимального немає." << endl;
    } else {cout <<  "Максимальне значення : " << Max << endl;};

    if (Min==9999999)
    {
        cout << "Miнімального немає." << endl;
    } else {cout <<  "Мінімальне значення : " << Min << endl;}
    if (sum==0)
    {
        cout << "Суми немає." << endl;
    } else {cout << "Сума = " << sum << endl;};

    if (dob==1)
    {
        cout << "Добутку немає." << endl;
    } else {cout << "Добуток = " << dob <<endl;};

    return 0;
}
