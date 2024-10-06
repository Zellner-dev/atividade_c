#include "requisicao.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

Requisicao* cria_requisicao(const char* nome, int inscricao, const char* procedimento) {
    Requisicao* requisicao = (Requisicao*)malloc(sizeof(Requisicao));

    requisicao->inscricao = inscricao;
    strcpy(requisicao->nome, nome);
    strcpy(requisicao->procedimento, procedimento);

    return requisicao;
}

int get_inscricao(Requisicao *requisicao) {
    return requisicao->inscricao;
}

char* get_procedimento(Requisicao *requisicao) {
    return requisicao->procedimento;
}