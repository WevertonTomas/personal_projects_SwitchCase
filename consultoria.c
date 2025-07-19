#include <stdio.h>

int main(){

int opçao;

printf("Bem vindo a consultoria WT.\n\n");
printf("Em qual beneficio você deseja consultoria?!\n");
printf("___________________________________________\n\n\n");
printf("Tecle [1] para Vale Alimentação.\n");
printf("Tecle [2] para Vale Transporte.\n");
printf("Tecle [3] para Plano de saúde.\n");
printf("Tecle [4] para Plano dental.\n");
printf("Tecle [0] para cancelar.\n");

printf("Digite a opção: ");
scanf("%d", &opçao);

switch (opçao)
{
case 1:
printf("Você escolheu: Vale alimentação.");
    break;
case 2:
printf("Você escolheu: Vale transporte.");
    break;
case 3:
printf("Você escolheu: Plano de saúde.");
    break;
case 4:
printf("Você escolheu: Plano dental.");
    break;
case 0:
printf("Você optou por descontinuar o atendimento, até logo!");
    return 1;
default:
printf("Opção inválida");
    return 0;
}

printf("\n\nA partir de agora daremos continuidade ao seu atendimento.");

return 0;
}