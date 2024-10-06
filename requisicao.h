#ifndef REQUISICAO_H
#define REQUISICAO_H

typedef struct  {
    char nome[40];
    int inscricao;
    char procedimento[10];
} Requisicao;

Requisicao* cria_requisicao(const char* nome, int inscricao, const char* procedimento);
char* get_nome(Requisicao* requisicao);
int get_inscricao(Requisicao* requisicao);
char* get_procedimento();
#endif
