#include <stdio.h>
int main(){
    int opcao;
    do{
        system("clm");
        exibirMenu();
        scanf("%d", &opcao);
    } while (opcao != 0);
    printf("Obrigada por usar o nosso ATM!");



}