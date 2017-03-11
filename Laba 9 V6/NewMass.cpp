#include <iostream>

using namespace std;

void NewMass(int &n,int &m,int X[],int &Size,int A[],int B[])
{
    bool flag,flag1;
    for (int i(0);i<n;i++)
    {
        flag=0;
        for (int j(0);j<m;j++)
        {
            if (A[i]==B[j])
            {
                flag=1;
            }
        }
        flag1=1;
        for (int k(0);k<Size;k++)
        {
            if (A[i]==X[k])
            {
                flag1=0;
            }
        }
        if (flag==1 && flag1==1)
        {
            X[Size]=A[i];
            Size++;
        }
    }

    cout << "X = ";
    for (int i(0);i<Size;i++)
    {
        cout << X[i] << " ";
    }
    cout << endl << endl;
}
