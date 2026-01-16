/*
 * Autor: Frederico Santos Gonçalves
 * Data: 15/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Watermelon
 * Link: https://codeforces.com/problemset/problem/4/A
 * Dificuldade: 1
 */

#include <iostream>
#define SUCESSO (0)
using namespace std;

int main(void) {
  int weight;
  cin >> weight;

  if(weight != 2 && weight%2 == 0) cout << "YES";
  else cout << "NO";

  return SUCESSO;
}
