#ifndef CONSORCIO_H_INCLUDED
#define CONSORCIO_H_INCLUDED
struct dadosconsorcio{
    char Nome[51];
    int Telefone[51];
    int CPF[20];
    char Endereco[51];
    int CEP[20];

};
typedef struct dadosconsorcio Dados;
Dados DigitarDados();


#endif // CONSORCIO_H_INCLUDED
