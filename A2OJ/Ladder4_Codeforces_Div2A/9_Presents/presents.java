/*
 * Autor: Frederico Santos Gonçalves
 * Data: 21/01/2026
 *
 * Plataforma: A2OJ
 * Problema: Presents
 * Link: https://codeforces.com/problemset/problem/136/A
 * Dificuldade: 1
 */

import java.util.Scanner;

public class presents {
  private static final Scanner scanner = new Scanner(System.in);
  private static final int TAM_MAX = 101;

  public static void main(String[] args) {
    int qntParticipants = scanner.nextInt();

    int[] presents = new int[TAM_MAX];
    for(int i = 1; i <= qntParticipants; i++) {
      int v = scanner.nextInt();
      presents[v] = i;
    }
    
    for(int i = 1; i <= qntParticipants; i++) System.out.println(presents[i]);
  }
}
