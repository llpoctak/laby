#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    system ("chcp 1251 > nul");

    cout << "������ ����� ����� ����� A(n),n<=300." << endl << "��������� ��������, ��� �������� ������� �������� ����� ������," << endl << "���� ����� ������������� �� ���������� ��� ����," << endl << "���� ����� �� �������������." << endl << endl;
    int n;

    do {
        cout << "������ n (n<=300): ";
        cin >> n;
    } while (n>300 || n<=0);
    cout << endl;

    int A[n];

    for (int i(1);i<=n;i++)
    {
        cout << "A[" << i << "]= ";
        cin >> A[i];
    }
    cout << endl;
    cout << "A = ";
    for (int i(1);i<=n;i++)
    {
        cout << A[i] << " ";
    }
    cout << endl << endl;

    unsigned long long Sum=0,Dob=1;

    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            if (A[i]<=A[j])
            {
                Dob*=A[i];
            }
            break;
                if (A[i]>=A[j])
                {
                    Sum+=A[i];
                }
                break;
        }
    }
    cout << endl << endl;
    cout << "������� = " << Dob << endl;
    cout << "C��� = " << Sum << endl;
    return 0;
}
