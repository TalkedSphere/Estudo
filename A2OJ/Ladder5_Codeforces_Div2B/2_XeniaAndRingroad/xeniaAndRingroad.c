/*
 * Autor: Frederico Santos Gonçalves
 * Data: 13/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Xenia and Ringroad
 * Link: https://codeforces.com/problemset/problem/339/B
 * Dificuldade: 2
 */

#include <stdio.h>
#define SUCESSO 0

int main() {
  unsigned long long int n, m;
  unsigned long long int pos = 1, nextPos, time = 0;

  scanf("%llu %llu%*c", &n, &m);

  for(unsigned long long int i = 0; i < m; i++) {
    scanf("%llu", &nextPos);
    if(nextPos >= pos) time += nextPos-pos;
    else {
      time += n-pos;
      time += nextPos;
    }
    pos = nextPos;
  }

  printf("%llu", time);
  return SUCESSO;
}
