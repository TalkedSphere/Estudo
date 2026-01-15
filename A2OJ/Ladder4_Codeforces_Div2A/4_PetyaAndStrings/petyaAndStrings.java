/*
 * Autor: Frederico Santos Gonçalves
 * Data: 14/01/2026
 *
 * Plataforma: A2OJ
 * Problema: String Task
 * Link: https://codeforces.com/problemset/problem/112/A
 * Dificuldade: 1
 */

import java.util.Scanner;

public class petyaAndStrings {
  private static final Scanner scanner = new Scanner(System.in);

  public static void main(String[] args) {
    String str1 = scanner.nextLine().toLowerCase();
    String str2 = scanner.nextLine().toLowerCase();

    int resultado = 0;
    for(int i = 0; i < str1.length(); i++) {
      if(str1.codePointAt(i) < str2.codePointAt(i)) {
        resultado = -1;
        break;
      }

      if(str1.codePointAt(i) > str2.codePointAt(i)) {
        resultado = 1;
        break;
      }
    }

    System.out.println(resultado);
  }
}
