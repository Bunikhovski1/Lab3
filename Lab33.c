#include <stdio.h>
#include <math.h>

int main() {
  float t;
  int x, y, z;

  // Введення
  printf("\nВведіть 3 цілі числа:\n");
  printf("\nВведіть число x: ");
  scanf("%d", &x);
  printf("Введіть число y: ");
  scanf("%d", &y);
  printf("Введіть число z: ");
  scanf("%d", &z);

  // Обчислення
  if (1 + (float)x == 0) {
    printf("\nВи ввели некоректні значення (виконується ділення на 0)\n");
  }
  else if ( ((1-(float)y) / (1+(float)x)) + (float)z < 0){
    printf("\nВи ввели некоректні значення (виконується логарифмування від'ємного числа)\n");
  }
  else {
    t = log2(((1-(float)y) / (1+(float)x)) + (float)z);
    printf("\nВідповідь: t = %.2f", t);
  }

}
