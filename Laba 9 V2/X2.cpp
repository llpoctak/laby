#include <iostream>

using namespace std;

int X2(int &n,int **X,unsigned long long Dob[])
{
    int temp;

    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            if (Dob[j]<Dob[i] && i!=j)
            {
                swap(Dob[j],Dob[i]);
            }
        }
    }

    cout << "X = " << endl;
    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            cout << X[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}
