#ifndef NEWVECTOR_H_INCLUDED
#define NEWVECTOR_H_INCLUDED

template <typename T>
void Matrix(T **A,T &n,T B[],T &k)
{
    int z=n-1;
    int b=0;

    for (int i(0);i<n;i++)
    {
        for (int j(0);j<n;j++)
        {
            if (A[i][j]==A[i][z])
            {
                b++;
                z--;
                if (b==n-1)
                {
                    B[k]=i;
                    k++;
                }
            }
        }
        b=0;
        z=n-1;
    }
}


#endif // NEWVECTOR_H_INCLUDED
