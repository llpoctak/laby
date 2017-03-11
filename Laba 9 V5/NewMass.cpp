#include <conio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

int NewMass(int &n,int A[],int B[])
{
    cout << "A = ";
    for (int i(0);i<n;i++)
    {
        cout << A[i] << " ";
    }
    cout << endl << endl;

    cout << "B = ";
    for (int i(0);i<n;i++)
    {
        cout << B[i] << " ";
    }
    cout << endl << endl;
}
