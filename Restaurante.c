#include <stdio.h>

int main()
{

    int escolha;

    printf("Bem vindo ao Restaurante *Lá ele*.\n\n");
    printf("Qual sua escolha para o almoço?\n\n");
    printf("Tecle [1] para Arroz, Feijão e Frango.\n");
    printf("Tecle [2] para Parmegiana e Macarrão ao Molho de tomate.\n");
    printf("Tecle [3] para Arrumadinho de carne de sol.\n");
    printf("Tecle [4] se deseja cancelar o atendimento.\n\n");

    printf("Digite a opção desejada: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("\nVocê escolheu: Arroz, Feijão e Frango.\n");
        break;
    case 2:
        printf("\nVocê escolheu: Parmegiana e Macarrão ao Molho de tomate.\n");
        break;
    case 3:
        printf("\nVocê escolheu: Arrumadinho de carne de sol.\n");
        break;
    case 4:
        printf("\nVocê optou por cancelar o atendimento, até mais.\n");
        return 0;
    default:
        printf("\nOpção inválida, digite um número que corresponde as opções acima.");
        return -1;
    }

    printf("\nObrigado por nos escolher, aguarde enquanto seu prato fica pronto.\n");

    return 0;
}
