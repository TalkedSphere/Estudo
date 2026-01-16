/*
 * Autor: Frederico Santos Gonçalves
 * Data: 15/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Way Too Long Words
 * Link: https://codeforces.com/problemset/problem/71/A
 * Dificuldade: 1
 */

#include <iostream>
#include <string>
#define SUCESSO (0)
#define TAM_MAX (101)
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();

  // Cria o vetor para armazenar as strings.
  string strs[TAM_MAX];

  // Obtém e guarda as strings.
  for(int i = 0; i < n; i++) getline(cin, strs[i]);

  // Printa os resultados.
  for(int i = 0; i < n; i++) {
    if(strs[i].length() >= 11) cout << strs[i][0] << strs[i].length()-2 << strs[i][strs[i].length()-1] << endl;
    else cout << strs[i] << endl;
  }

  return SUCESSO;
}
