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
        cout << "������ ����. ������ A[n][n] n (n>0 � n<6): ";
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

    for(k=1;k<=p;k++)/*���� �� ������ �����*/
    {
        for (j=k-1;j<n-k+1;j++) B[Size++]=A[k-1][j];/*����������� �������� �������� ��� �������*/
        for (j=k;j<n-k+1;j++) B[Size++]=A[j][n-k];/* --//-- �� ������� ������������� �������*/
        for (j=n-k-1;j>=k-1;--j) B[Size++]=A[n-k][j];/* --//-- �� ������� ��������������� �������*/
        for (j=n-k-1;j>=k;j--) B[Size++]=A[j][k-1];/* --//-- �� ������ ������������� �������*/
    }

    cout << "B = ";
    for (int i(0);i<Size;i++)
    {
        cout << B[i] << " ";
    }
    cout << endl << endl;

    return 0;
}
