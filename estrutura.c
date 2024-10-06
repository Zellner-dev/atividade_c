#include "estrutura.h"

#include <stdlib.h>

Estrutura* create() {
    Estrutura* e = (Estrutura*) malloc(sizeof(Estrutura));

    e->capacidade = 10;
    e->quantidade = 0;
    e->requisicoes = (Requisicao**) malloc(e->capacidade * sizeof(Requisicao));
    e->primeiroSaida = 0;
    e->ultimoSaida = -1;

    return e;
}

void inserir(Estrutura *estrutura, Requisicao *requisicao) {
    estrutura->ultimoSaida++;
    estrutura->requisicoes[estrutura->ultimoSaida] = requisicao;
    estrutura->quantidade++;
}

char* get_nome(Requisicao* requisicao) {
    return requisicao->nome;
}

int get_size(Estrutura* estrutura) {
    return estrutura->quantidade;
}

void libera(Requisicao *requisicao) {
    free(requisicao);
}

Requisicao* remover(Estrutura* estrutura) {

    Requisicao* requisicao = estrutura->requisicoes[estrutura->primeiroSaida];
    estrutura->primeiroSaida++;
    estrutura->quantidade--;

    return requisicao;
}

