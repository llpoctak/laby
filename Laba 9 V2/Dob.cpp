#include <iostream>
int NewMass(int &n,int **X,unsigned long long Dob[])
{
    for (int i = 0; i < n; i++) {
            Dob[i] = 1;
        for (int j = 0; j < n; j++) {
            Dob[i] *= X[i][j];
        }
    }
}
