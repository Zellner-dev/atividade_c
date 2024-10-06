#ifndef ESTRUTURA_H
#define ESTRUTURA_H
#include "requisicao.h"

typedef struct {
    Requisicao** requisicoes;
    int capacidade;
    int primeiroSaida;
    int ultimoSaida;
    int quantidade;
} Estrutura;

Estrutura* create();
void inserir(Estrutura *estrutura, Requisicao *requisicao);
void libera(Requisicao *requisicao);
int get_size(Estrutura *estrutura);
Requisicao* remover(Estrutura* estrutura);
#endif
