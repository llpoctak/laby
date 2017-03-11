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
    cout << "¬вед≥ть ≥м*€ та ≥н≥ц≥али: ";
    cin.getline(z.Imya,80);
    cout << "¬вед≥ть номер групи: ";
    cin >> z.Grupa;
    cin.get();
    cout << "¬вед≥ть усп≥шн≥сть студента (5 оц≥нок): ";
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
        cout << "≤м*€ та ≥н≥ц≥али: " << z[i].Imya << endl;
        cout << "Ќомер групи: " << z[i].Grupa << endl;
        cout << "”сп≥шн≥сть студента: " << z[i].Uspishnist[0] << " " << z[i].Uspishnist[1] << " " << z[i].Uspishnist[2] << " " << z[i].Uspishnist[3] << " " << z[i].Uspishnist[4] << endl;
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

