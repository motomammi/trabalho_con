#include <stdio.h>
#include "consorcio.h"


FILE *fpDadosCliente;
void AbrirArquivoCliente()
{
    fpDadosCliente = fopen("Cliente.txt", "rb+");
    if(fpDadosCliente == NULL)
    {
        fpDadosCliente = fopen("Cliente.txt", "wb+");
        if(fpDadosCliente == NULL)
        {
            printf("Nao Abriu Cliente.txt\n");
            exit(1);
        }
    }
}
void FecharArquivoCliente()
{
    fclose(fpDadosCliente);
}
void SalvarNovoCliente(Dados D)
{
    fseek(fpDadosCliente,0,SEEK_END);
    fwrite(&D, sizeof(Dados),1,fpDadosCliente);
    fflush(fpDadosCliente);
}

Dados DigitarDados(){
    Dados D;

    gotoxy(27, 6);
    scanf(" %[^\n]", D.Nome);

    gotoxy(27, 9);
    scanf(" %[^\n]", D.Telefone);

    gotoxy(27, 12);
    scanf(" %[^\n]", D.CPF);

    gotoxy(27, 15);
    scanf(" %[^\n]", D.Endereco);

    gotoxy(27, 20);
    scanf(" %[^\n]", D.CEP);


    /*printf("Digite o Valor: ");
    scanf(" %lf", &M.ValorPago);*/

    return D;
}

void SimularConsorcio(){//precisa dessa função?
    Borda(14, 3, 52, 18, 1, 1);
    gotoxy(16, 6); printf("     NOME: ");
    gotoxy(16, 9); printf(" TELEFONE: ");
    gotoxy(16, 12); printf("     CPF: ");
    gotoxy(16, 12); printf("ENDEREÇO: ");
    gotoxy(16, 15); printf("     CEP: ");
    Borda(26, 5, 30, 2, 0, 0);
    Borda(26, 8, 30, 2, 0, 0);
    Borda(26, 11, 30, 2, 0, 0);
    Borda(26, 14, 30, 2, 0, 0);
    Borda(26, 16, 30, 2, 0, 0);
}

/*void ImprimirConsulta(Consulta C){//precisa dessa função?
    Borda(14, 3, 52, 18, 1, 1);
    gotoxy(16, 6);
    printf("\tCRM-Medico: %s\n", C.CRMMedico);
    gotoxy(16, 9);
    printf("\tCPF-Paciente: %s\n", C.CPFPaciente);
    gotoxy(16, 12);
    printf("\tData: %s\n", C.DataConsulta);
    gotoxy(16, 15);
    printf("\tHora: %s\n", C.HoraConsulta);
}*/
