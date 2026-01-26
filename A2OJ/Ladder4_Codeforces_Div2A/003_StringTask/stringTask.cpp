/*
 * Autor: Frederico Santos Gonçalves
 * Data: 13/01/2026
 *
 * Plataforma: A2OJ
 * Problema: String Task
 * Link: https://codeforces.com/problemset/problem/118/A
 * Dificuldade: 2
 */

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#define SUCESSO (0)
#define VOGAIS ("aAeEiIoOuUyY")
using namespace std;

int main() {
  string s;
  getline(cin, s);

  for(int i = 0; i < s.length(); i++) {
    if(strchr(VOGAIS, s[i]) == NULL) cout << "." << (char) tolower(s[i]);
  }

  return SUCESSO;
}
