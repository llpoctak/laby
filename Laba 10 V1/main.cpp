#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include "Function.h"

using namespace std;

int main()
{
    system ("chcp 1251 > nul");

    const int n = 10;
    STUDENT Arr[n];
    for (int i(0);i<n;i++)
    {
        Input(Arr[i]);
    }

    for (int i(0);i<n;i++)
    {
        Print(Arr,n);
    }

    _getch();
    return 0;
}
