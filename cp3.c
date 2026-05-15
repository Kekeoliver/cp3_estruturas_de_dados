#include <stdio.h>
 int opcao;
int main(){
    do{
        system("clm");
        exibirMenu();
        scanf("%d", &opcao);
    } while (opcao != 0);
    printf("Obrigada por usar o nosso ATM!");
}
void exibirMenu(){
    printf("\n");
    printf("CAIXA ELETRONICO");
    printf("\n");
    printf("1 - Consultar Saldo \n");
    printf("2 - Realizar Saque \n");
    printf("3 - Realizar deposito \n");
    printf(" 0 - Sair");
    printf("================================\n");
    printf(" Escolha uma opcao: ");

    scanf("%d", &opcao);
    while (getchar() != '\n');
    if (opcao < 0 || opcao > 3){
        printf("Opcao invalida");
    }


}