#include <cstdlib>
#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

struct STUDENT {
    char *Imya;
    int Grupa;
    int Uspishnist[5];
    };

void Input(STUDENT &z)
{
    z.Imya = new char[80];
    cout << "������ ��*� �� �������: ";
    cin.getline(z.Imya,80);
    cout << "������ ����� �����: ";
    cin >> z.Grupa;
    cin.get();
    cout << "������ �������� �������� (5 ������): ";
    for (int i(0);i<5;i++)
    {
        cin >> z.Uspishnist[i];
        cin.get();
    }
    cout << endl;
}

void Print(STUDENT z[],int n)
{
    cout << "----------" << endl;
    for (int i(0);i<n;i++)
    {
        cout << "��*� �� �������: " << z[i].Imya << endl;
        cout << "����� �����: " << z[i].Grupa << endl;
        cout << "�������� ��������: " << z[i].Uspishnist[0] << " " << z[i].Uspishnist[1] << " " << z[i].Uspishnist[2] << " " << z[i].Uspishnist[3] << " " << z[i].Uspishnist[4] << endl;
        cout << "----------" << endl;
    }
}
/*void Sort(STUDENT z[],int n)
{
    for (int i(0);i<n;i++)
    {
        if (Z[i]<Z[i+1])
        {
            Z[i+1]=
        }
    }
}*/

