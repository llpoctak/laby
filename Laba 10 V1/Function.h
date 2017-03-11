#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

struct STUDENT {
    char *Imya;
    int Grupa;
    int Uspishnist[5];
    };

void Input(STUDENT &z);

void Print(STUDENT z[],int n);
#endif // FUNCTION_H_INCLUDED
