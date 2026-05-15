#include <stdio.h>
 int opcao;
 int exibirMenu;
 int consultarSaldo;
 int saldo;
 int realizarSaque;

int main(){
    do{
        system("cls");
        exibirMenu();
        scanf("%d", &opcao);
    } while (opcao != 0);
    printf("Obrigada por usar o nosso ATM!");
}


void consultarSaldo(float saldo) {
    // No Windows use "cls", no Linux/Mac use "clear"
    system("cls || clear"); 

    printf("\n============================\n");
    printf("      EXTRATO BANCARIO      \n");
    printf("============================\n");
    printf(" Saldo Disponivel: R$ %.2f\n", saldo);
    printf("============================\n");
    
    printf("\nPressione ENTER para voltar ao menu...");
    fflush(stdin); // Limpa o buffer do teclado
    getchar();     // Aguarda o usuário pressionar uma tecla

    return saldo;
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

    while (getchar() != '\n');
    if (opcao < 0 || opcao > 3){
        printf("Opcao invalida");
    }
    switch(opcao) {
        case 1:
        consultarSaldo(saldo);
        break;
        case 2:
        saldo = realizarSaque(saldo);
        break;
        case 0:
        printf("Saldo...\n");
        break;
        defult:
        printf("Opcao invalida!\n");

     float sacar(float saldo) {
    float valor;
    printf("Digite o valor do saque: R$ ");
    scanf("%f", &valor);

    if (valor <= 0) {
        printf("Valor invalido para saque.\n");
    } else if (valor > saldo) {
        printf("Erro: Saldo insuficiente para realizar o saque.\n");
    } else {
        saldo -= valor;
        printf("Saque de R$ %.2f realizado com sucesso!\n", valor);
    }
    return saldo;
}   


    }
    return 0;


}