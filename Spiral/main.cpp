#include <iostream>
#include <time.h>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251 > nul");

    int n;

    do {
        cout << "Введіть розм. масиву A[n][n] n (n>0 і n<6): ";
        cin >> n;
    } while (n<=0 || n>5);

    int A[n][n];
    srand(time(NULL));

    cout << "A = " << endl;
    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            A[i][j]=rand()%11+1;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    int Size = 0;
    int B[Size];
    int i=1,j,k,p=n/2;

    for(k=1;k<=p;k++)/*Цикл по номеру витка*/
    {
        for (j=k-1;j<n-k+1;j++) B[Size++]=A[k-1][j];/*Определение значений верхнего гор столбца*/
        for (j=k;j<n-k+1;j++) B[Size++]=A[j][n-k];/* --//-- По правому вертикальному столбцу*/
        for (j=n-k-1;j>=k-1;--j) B[Size++]=A[n-k][j];/* --//-- по нижнему горизонтальному столбцу*/
        for (j=n-k-1;j>=k;j--) B[Size++]=A[j][k-1];/* --//-- по левому вертикальному столбцу*/
    }

    cout << "B = ";
    for (int i(0);i<Size;i++)
    {
        cout << B[i] << " ";
    }
    cout << endl << endl;

    return 0;
}
