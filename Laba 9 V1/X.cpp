void NewMass(bool &flag,int &Size,int &n,int &m,int X[],int A[],int B[])
{
    for (int i(0);i<n;i++)
    {
        flag = 1;
        for (int k(0);k<Size;k++)
        {
            if (A[i]==X[k])
            {
                flag=0;
            }
        }
        if (flag==1)
        {
            X[Size]=A[i];
            Size++;
        }
    }
    for (int i(0);i<m;i++)
    {
        flag = 1;
        for (int k(0);k<Size;k++)
        {
            if (B[i]==X[k])
            {
                flag=0;
            }
        }
        if (flag==1)
        {
            X[Size]=B[i];
            Size++;
        }
    }
}
