#include <iostream>
// SABOR DE SORVETE
int main (int argc, char** argv){
    int i; 
    do{
        printf("\n Digite um numero do sabor\n");

        printf("\t (1) ...Flocos \n)");
        printf("\t (2) ...Morango \n");
        printf("\t (3) ...Chocolate \n");

        scanf("%d", &i);

    }while ((i<1) || (i>3));

    switch(i){
        case 1:
            printf("\t\t Vc escolhru flocos\n");
            break;
    
        case 2:
            printf("\t\t Vc escolhru Morango\n");
            break;
        
         case 3:
            printf("\t\t Vc escolhru chocolate\n");
            break;
    }
    
    return 0;
}