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
        cout << "������ � �� b (a<b): ";
        cin >> a >> b;
    }  while (a>=b);

    int n;

    do {
        cout << "������ n (n <= 200): ";
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
        cout << "�����,�� ����������� ���� �������� - ����." << endl;
    };
    if (k==0)
    {
        cout << "�����,�� �������� ������ ������� - ����." << endl;
    };
    if (Max==0)
    {
        cout << "������������� ����." << endl;
    } else {cout <<  "����������� �������� : " << Max << endl;};

    if (Min==9999999)
    {
        cout << "Mi��������� ����." << endl;
    } else {cout <<  "̳������� �������� : " << Min << endl;}
    if (sum==0)
    {
        cout << "���� ����." << endl;
    } else {cout << "���� = " << sum << endl;};

    if (dob==1)
    {
        cout << "������� ����." << endl;
    } else {cout << "������� = " << dob <<endl;};

    return 0;
}
