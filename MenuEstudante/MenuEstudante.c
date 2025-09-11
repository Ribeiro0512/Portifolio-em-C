#include <stdio.h> 

int main() {
    int opcao;          
    float nota1, nota2, media;  

    // Exibição do MENU inicial
    printf("===================================\n");
    printf("MENU DE GERENCIAMENTO DO ESTUDANTE\n");
    printf("===================================\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("===================================\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao); 

    // Estrutura switch para decidir qual funcionalidade executar
    switch (opcao) {
        case 1: 
            // Caso o usuário escolha calcular a média
            printf("===================================\n");
            printf("Vamos calcular a média do estudante\n");
            printf("===================================\n");

            // Entrada das duas notas
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);

            // Verificação se as notas estão dentro do intervalo válido (0 a 10)
            if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
                media = (nota1 + nota2) / 2; // Cálculo da média
                printf("A média do estudante é: %.1f\n", media); // Exibe a média com 1 casa decimal
                printf("===================================\n");
            } else {
                // Caso as notas sejam inválidas
                printf("===================================\n");
                printf("   ENTRADA COM VALORES ERRADOS");
            }
            break;

        case 2:
            // Caso o usuário escolha verificar o status do aluno
            printf("===================================\n");
            printf("    Vamos determinar o Status\n");
            printf("===================================\n");

            // Entrada da média diretamente
            printf("Digite a média do estudante: ");
            scanf("%f", &media);
            printf("===================================\n");

            // Verifica se a média é suficiente para aprovação
            media >= 6 ? printf("ALUNO APROVADO") : printf("ALUNO REPROVADO");
            break;

        case 3:
            // Caso o usuário escolha sair
            printf("===================================\n");
            printf("      Saindo do programa...\n");
            printf("===================================\n");
            break;

        default:
            // Caso o usuário digite um número que não corresponde a nenhuma opção
            printf("===================================\n");
            printf("         OPÇÃO INVALIDA\n");
            printf("===================================\n");
            break;
    }

    return 0;
}