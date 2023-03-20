#include "ABP.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  PONT r;
  int v, b, n;
  int continuar = 1;

  do {

    printf("\n\tMenu de opção\n\n");
    printf("1. Inicializa a Árvore \n");
    printf("2. Insere na Árvore\n");
    printf("3. Buscar um valor na Árvore\n");
    printf("4. Conta o numero de nós da Árvore\n");
    printf("5. Imprime a Árvore\n");
    printf("6. Remove um nó da Árvore\n");
    printf("0. Sair\n");

    scanf("%d", &continuar);
    system("cls || clear");

    switch (continuar) {
    case 1:
      r = inicializa();
      printf("Árvore criada com sucesso!");
      break;

    case 2:
      printf("Digite um número para inserir na arvore:");
      scanf("%d", &v);
      PONT no = criaNovoNo(v);
      r = adiciona(r, no);
      printf("NO inserido com sucesso!");
      break;

    case 3:
      printf("Digte um valor para pesquisar na Árvores!!");
      scanf("%d", &b);
      r = contem(b, r);
      if (r == NULL)
        printf("O valor %d, não foi localizado", b);
      else
        printf("O valor %d foi localizado na Árvore", b);
      break;

    case 4:
      n = numeroNos(r);
      printf("A Árvore possui: %d nós", n);
      break;

    case 5:
      exibirArvore(r);
      break;

      //  case 6:
      // printf("Digite um valor para remover da Árvore:");
      // scanf("%d", &v);
      // r = removeNo(r, v);
      // printf("Valor removido com sucesso!");
      // break;

    case 0:
      printf("Programa finalizado!");
      break;
    default:
      printf("Digite uma opção valida\n");
    }
  } while (continuar);
}