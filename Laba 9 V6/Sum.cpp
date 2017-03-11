#include <iostream>
#include <math.h>

using namespace std;

void Sum(int X[],int &Size,double &Sum1)
{
    for (int i(0);i<Size;i++)
    {
        Sum1+=sin(X[i]);
    }
    cout << "Сума = " << Sum1 << endl;
}
