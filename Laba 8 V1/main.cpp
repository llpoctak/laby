#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <cstring>
#include <cstdio>


using namespace std;

int main()
{
    system("chcp 1251 > nul");

    bool flag1=0;
    bool flag2=0;
    bool flag=0;
    int Size=0,Size1=0;
    char text[500],slovo[Size],text2[Size1];
    char text[500],slovo[Size],text2[Size1];
    char text[500],slovo[Size],text2[Size1];
    cout << "Введіть текст: " << endl;
    cin.getline(text,500);
    cout << "Довжина = " << strlen(text) << endl;

    char len=strlen(text);

    const char separator[] = " .,?!";

    for (int i=1;i<=len;i++)
    {
        for (int j=0;j<strlen(separator);j++)
        {
            if ((text[i]==separator[j])||(i==len))
            {
                flag1=1;
            }
            if (text[i]==separator[j])
            {
                flag2=1;
            }
        }
            if (flag1==1)
            {
                slovo[Size]=text[i+1];
                Size++;
            }
        }
    }
    cout << endl << text1;
    return 0;
}
