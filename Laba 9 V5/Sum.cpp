int Sum(int &n,int **X,int B[],int A[])
{
    for (int i(0);i<n;i++)
    {
        A[i]=0;
        B[i]=0;
        for(int j(0);j<n;j++)
        {
            A[i]+=X[i][j];
            B[i]+=X[j][i];
        }
    }
}
