#include <stdio.h>

int main() {

    int qtdTurmas;
    int qtdAlunos;
    float mediaAtual;
    float maiorMedia;
    int turmaComMaiorMedia;
    float somaNotasAtuais;

    // solicita a quantidade de turmas
    printf("Informe a quantidade de turmas: ");
    scanf("%d", &qtdTurmas);

    // solicita a quantidade de alunos
    for (int i = 1; i <= qtdTurmas; i++) {
        printf("Digite a quantidade de alunos da turma %d: ", i);
        scanf("%d", &qtdAlunos);

        // solicita a nota individual de cada aluno
        for (int j = 1; j <= qtdAlunos; j++) {
            float notaAtual;
            printf("Digite a nota do aluno %d: ", j);
            scanf("%f", &notaAtual);
            somaNotasAtuais += notaAtual;
            printf("== somaNotasAtuais == %3.2f \n", somaNotasAtuais);
        }

        printf("== sizeof(qtdAlunos) == %i \n", qtdAlunos);
        mediaAtual = somaNotasAtuais / qtdAlunos;
        printf("== mediaAtual == %3.2f \n", mediaAtual);

        somaNotasAtuais = 0;

        if (mediaAtual > maiorMedia) {
            maiorMedia = mediaAtual;
            turmaComMaiorMedia = i;
        }
        printf("== somaNotasAtuais == %d \n", somaNotasAtuais);
    }

    printf("Ao fim do programa, a turma com maior media eh a turma numero %d", turmaComMaiorMedia);

    return 0;
}
