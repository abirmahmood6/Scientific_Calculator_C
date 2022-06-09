#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main () {
int x, y, choice;
float a, b, result;

printf ("\n******************************\n");
printf ("     Welcome to Calculator\n");
printf ("******************************\n");
printf ("Select your choice:\n");
printf("1. Addition\n");
printf("2. Substraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Square root\n");
printf("6. Cube root\n");
printf("7. X ^ 2\n");
printf("8. X ^ 3\n");
printf("9. X ^ Y\n");
printf("10. Percentage %%\n");
printf("11. log10(x)\n");
printf("12. Modulus\n");

printf ("\n       Press 0 to QUIT\n");
printf ("-------------------------------\n");
  printf ("Choice:");
  scanf ("%d", &choice);
  switch (choice) {
   case 1: 
      printf ("X:");
      scanf("%d", &x);
      printf ("Y:");
      scanf ("%d", &y);
 result= x + y;
 printf ("Result: %.2f", result);
 break;

  case 2: 
      printf ("X:");
      scanf("%d", &x);
      printf ("Y:");
      scanf ("%d", &y);
 result= x - y;
 printf ("Result: %.2f", result);
 break;

  case 3: 
      printf ("X:");
      scanf("%d", &x);
      printf ("Y:");
      scanf ("%d", &y);
 result= x * y;
 printf ("Result: %.2f", result);
 break;

  case 4: 
      printf ("X:");
      scanf("%d", &x);
      printf ("Y:");
      scanf ("%d", &y);
 result= x / y;
 printf ("Result: %.2f", result);
 break;

  }                                                                       





    return 0;
}