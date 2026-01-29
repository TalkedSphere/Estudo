/*
 * Autor: Frederico Santos Gonçalves
 * Data: 29/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Arrival of the General 
 * Link: https://codeforces.com/problemset/problem/144/A
 * Dificuldade: 1
 */

#include <bits/stdc++.h>
using namespace std;
const int SUCESSO (0);
const int TAM_MAX (100);

int main() {
  int n, fila[TAM_MAX];
  cin >> n;
  cin.ignore();

  int min = INT32_MAX, posMin, max = 0, posMax;
  for(int i = 0; i < n; i++) {
    cin >> fila[i];

    if(fila[i] > max) {
      max = fila[i];
      posMax = i;
    }
    if(fila[i] <= min) {
      min = fila[i];
      posMin = i;
    }
  }

  int time = 0;
  time += posMax;
  time += n - 1 - posMin;
  if(posMin < posMax) time--;

  cout << time;
  return SUCESSO;
}
