#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int escolha, i, cont, c;
    char tarefa[100][100];

    printf("============= Lista de Tarefas =============");
    printf("\nInforme quantas tarefas deseja adicionar: ");
        scanf("%d", &cont);
        while ((c = getchar()) != '\n' && c != EOF);
        for(i=1; i<=cont; i++){
            printf("\nInforme o nome da tarefa: ");
            fgets(tarefa[i], sizeof(tarefa[1]), stdin);
            printf("\nTarefa adicionada: ");
            printf("%s", tarefa[i]);
        }
    return 0;
}
