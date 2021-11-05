#include <iostream>
int main(int argc, char** ergv) {
    char nome[30];
    char endereco[30];
    int idade; 
    
    printf("Nome \n");
    scanf("%s",&nome);

    printf("Endereco \n ");
    scanf("%s", &endereco);

    printf("Idade");
    scanf("%d",&idade);

    printf("\n nome: %s",nome);
    printf("\n Endereco: %s",endereco);
    printf("\n nome: %d",idade);
    
    return 0;
}