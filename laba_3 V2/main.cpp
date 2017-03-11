#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <math.h>
#include <cmath>

using namespace std;

int fact(int k, int res)
{
    for (int i = 1; i <= k; i++)
    {
       res *= i;
    }
    return res;
}

int main()
{
    system("chcp 1251 > nul");
    cout << "<-----  Лаба ----->" << endl;

    int res = 1;

    double x,a,e;

    do {
    cout << "X = ";
    cin >> x;
    } while (x==0);

    do {
    cout << "A = ";
    cin >> a;
    } while (a==0);

    do {
    cout << "E = ";
    cin >> e;
    } while (e<=0);

    int k = 1;
    double sum = 0, prk = (sin(pow(a,k)+pow(x,k)))/fact(k,res);
    while (abs(prk)>e)
    {
        cout << "prk " << k << " = " << prk << endl;
        sum += prk;
        k++;
        prk = (sin(pow(a,k) + pow(x,k)))/fact(res,fact(k,res));
    }

    cout << k-1 << endl;

    cout << "Сума = " << sum << endl;

    cout << endl;
    cout << fact(k,res);

    _getch();
    return 0;
}

