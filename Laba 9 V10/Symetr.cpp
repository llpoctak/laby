void Symetriya(int &n,int &m,int A[],int B[],int &Size,int C[])
{

    bool flag1,flag2,flag3,flag4;

    for (int i(0);i<n;i++)
    {
        flag1=1;
        for (int j(0);j<m;j++)
        {
            if (A[i]==B[j])
            {
                flag1=0;
            }
        }
        flag2=1;
        for (int k(0);k<Size;k++)
        {
            if (A[i]==C[k])
            {
                flag2 = 0;
            }
        }
        if (flag1==1 && flag2==1)
        {
            C[Size]=A[i];
            Size++;
        }
    }

    for (int i(0);i<m;i++)
    {
        flag3=1;
        for (int j(0);j<n;j++)
        {
            if (B[i]==A[j])
            {
                flag3=0;
            }
        }
        flag4=1;
        for (int k(0);k<Size;k++)
        {
            if (B[i]==C[k])
            {
                flag4 = 0;
            }
        }
        if (flag3==1 && flag4==1)
        {
            C[Size]=B[i];
            Size++;
        }
    }
}
