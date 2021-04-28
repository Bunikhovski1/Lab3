#include <stdio.h>

int main() {
  int n;
  printf("Введіть число в діапазоні від 1 до 12: ");
  scanf("%d", &n);

  switch (n) {
    case 1:printf("\n--------\n"); printf("Січень");printf("\n--------\n"); break;
    case 2:printf("\n--------\n"); printf("Лютий");printf("\n--------\n"); break;
    case 3:printf("\n--------\n"); printf("Березень");printf("\n--------\n"); break;
    case 4:printf("\n--------\n"); printf("Квітень");printf("\n--------\n"); break;
    case 5:printf("\n--------\n"); printf("Травень");printf("\n--------\n"); break;
    case 6:printf("\n--------\n"); printf("Червень");printf("\n--------\n"); break;
    case 7:printf("\n--------\n"); printf("Липень");printf("\n--------\n"); break;
    case 8:printf("\n--------\n"); printf("Серпень");printf("\n--------\n"); break;
    case 9:printf("\n--------\n"); printf("Вересень");printf("\n--------\n"); break;
    case 10:printf("\n--------\n"); printf("Жовтень");printf("\n--------\n"); break;
    case 11:printf("\n--------\n"); printf("Листопад");printf("\n--------\n"); break;
    case 12:printf("\n--------\n"); printf("Грудень");printf("\n--------\n"); break;
    default: printf("\nВи ввели некоректне число!");
  }
}
