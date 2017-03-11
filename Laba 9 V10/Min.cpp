void Minimalne(int &Size,int C[],int &Min)
{
    Min=C[0];
    for (int i(0);i<Size;i++)
    {
        if (C[i]<Min)
        {
            Min=C[i];
        }
    }
}
