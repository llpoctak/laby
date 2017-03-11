#include <iostream>
#include <cstring>
#include <conio.h>
#include <cstdlib>

using namespace std;

void Languages (char &symbol)
{
    char Upper[]={"AÁÂÃ¥ÄÅªÆÇÈ²¯ÉÊËÌÍÎÏĞÑÒÓÔÕÖ×ØÙÜŞßÛİÚ"};
    char Lower[]={"àáâã´äåºæçè³¿éêëìíîïğñòóôõö÷øùüşÿûıú"};

    for (int i(0);i<38;i++)
    {

        if (Upper[i]==symbol)
        {
            symbol = Lower[i];
        }
    }
}

int main() {
    system("color F8");
    system("chcp 1251 > nul");
    cout << "Ââåä³òü òåêñò: ";
    char str[100];
    cin.getline(str, sizeof(str));
    system("cls");
    cout << "Âàø òåêñò: \"" << str << "\"" << endl;
    char symbol = str[0];
    size_t length = strlen(str);
    if (isupper(symbol)) symbol = tolower(symbol);
    Languages(symbol);
    cout << length << endl;
    for (int i = 0; i < length; i++)
    {
            if (!isspace(str[i]) && !ispunct(str[i]))
            {
                if (str[i+1] == symbol)
                {
                    for (int k = i+1; k < length; k++)
                    {
                        str[k] = str[k+1];
                    }
                    length--;
                    i--;
                }
            }
        if ((isspace(str[i]) || ispunct(str[i])) && !isspace(str[i+1]) && !ispunct(str[i+1]))
        {
            symbol = str[i+1];
            if (isupper(symbol)) symbol = tolower(symbol);
            Languages(symbol);
        }
    }
    cout << strlen(str) << endl;
    cout << str << endl;
    _getch();
    return 0;
}
