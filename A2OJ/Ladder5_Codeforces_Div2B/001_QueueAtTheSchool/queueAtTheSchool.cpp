/*
 * Autor: Frederico Santos Gonçalves
 * Data: 29/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Queue at the School
 * Link: https://codeforces.com/problemset/problem/266/B
 * Dificuldade: 1
 */

#include <bits/stdc++.h>
#define SUCESSO (0)
using namespace std;
const char BOY = 'B';
const char GIRL = 'G';

int main() {
  int n, t;
  cin >> n >> t;
  cin.ignore();
  string fila;
  getline(cin, fila);

  for(int i = 0; i < t; i++) {
    for(int j = 0; j < n-1; j++) {
      if(fila[j] == BOY && fila[j+1] == GIRL) {
        fila[j] = GIRL;
        fila[j+1] = BOY;
        j++;
      }
    }
  }

  cout << fila;
  return SUCESSO;
}
