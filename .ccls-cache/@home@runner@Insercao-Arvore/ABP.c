#include "ABP.h"
#include <stdio.h>
#include <stdlib.h>

// inicializando a arvore

PONT inicializa() { return (NULL); }

// criando um novo nó

PONT criaNovoNo(TIPOCHAVE ch) {
  PONT novoNo = (PONT)malloc(sizeof(NO));
  novoNo->esq = NULL;
  novoNo->dir = NULL;
  novoNo->chave = ch;
  return (novoNo);
}

// função que adiciona um nó

PONT adiciona(PONT raiz, PONT no) {
  if (raiz == NULL)
    return (no);
  if (no->chave < raiz->chave)
    raiz->esq = adiciona(raiz->esq, no);
  else
    raiz->dir = adiciona(raiz->dir, no);
  return (raiz);
}

PONT contem(TIPOCHAVE ch, PONT raiz) {
  if (raiz == NULL)
    return (NULL);
  if (raiz->chave == ch)
    return (raiz);
  if (raiz->chave == ch)
    return contem(ch, raiz->esq);
  else
    return contem(ch, raiz->dir);
}

int numeroNos(PONT raiz) {
  if (!raiz)
    return 0;
  return (numeroNos(raiz->esq) + 1 + numeroNos(raiz->dir));
}

void exibirArvore(PONT raiz) {
  if (raiz != NULL) {
    printf("%i", raiz->chave);
    printf("(");
    exibirArvore(raiz->esq);
    exibirArvore(raiz->dir);
    printf(")");
  }
}