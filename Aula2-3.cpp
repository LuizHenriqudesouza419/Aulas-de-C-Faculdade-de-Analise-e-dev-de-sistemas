#include <iostream>
//CONTADOR 
int main (int argc, char** argv){
    int contador;

    printf("\nDigite um valor: ");
    scanf("%d", &contador);

    for(contador; contador >=1; contador-- )
    {
        printf("%d ", contador);
    }
    return 0;
}