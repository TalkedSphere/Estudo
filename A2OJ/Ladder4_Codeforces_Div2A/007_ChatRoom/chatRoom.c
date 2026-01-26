/*
 * Autor: Frederico Santos Gonçalves
 * Data: 21/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Chat Room
 * Link: https://codeforces.com/problemset/problem/58/A
 * Dificuldade: 2
 */

#include <stdio.h>
#include <string.h>
#define SUCESSO (0)
#define TAM_MAX (101)
#define model ("hello")

int main() {
  char msg[TAM_MAX];
  fgets(msg, TAM_MAX, stdin);

  int posModel = 0;
  for(int i = 0; i < strlen(msg); i++) {
    if(msg[i] == model[posModel]) posModel++;
    else continue;
  }

  if(posModel == strlen(model)) printf("YES");
  else printf("NO");

  return SUCESSO;
}
