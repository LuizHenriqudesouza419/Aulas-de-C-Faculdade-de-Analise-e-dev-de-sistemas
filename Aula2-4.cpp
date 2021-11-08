#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char nome [30];
    int i;
    printf("Digite o sobrenome do aluno:\n");
    get(nome);
   
    for(i=0; nome[1]!= ' '; i++)
    nome[i] = toupper(nome[1]);
    printf("|n\nSobrenome convertido: %s\n\n",nome);
    return 0;
}