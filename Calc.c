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

  do{
  printf ("\nChoice:");
  scanf ("%d", &choice);
  
if (choice < 0 || choice >12) {
    printf ("Please choose between 1-12");
  
} else {



  switch (choice) {

   case 1: 
      printf ("X:");
      scanf("%d", &x);
      printf ("Y:");
      scanf ("%d", &y);
 result= x + y;
 printf ("Result: %.2f\n", result);
 break;

  case 2: 
      printf ("X:");
      scanf("%d", &x);
      printf ("Y:");
      scanf ("%d", &y);
 result= x - y;
 printf ("Result: %.2f\n", result);
 break;

  case 3: 
      printf ("X:");
      scanf("%d", &x);
      printf ("Y:");
      scanf ("%d", &y);
 result= x * y;
 printf ("Result: %.2f\n", result);
 break;

  case 4: 
      printf ("X:");
      scanf("%f", &a);
      printf ("Y:");
      scanf ("%f", &b);
 result= a / b;
 printf ("Result: %.2f\n", result);
 break;

  case 5: 
      printf ("X:");
      scanf("%d", &x);
     
 result= sqrt (x);
 printf ("Result: %.2f\n", result);
 break;

  case 6: 
      printf ("X:");
      scanf("%d", &x);
 result= cbrt (x);
 printf ("Result: %.2f\n", result);
 break;

  case 7: 
  printf ("X:");  
  scanf ("%d", &x); 
 result=  pow(x, 2);
 printf ("Result: %.2f\n", result);
 break;
 

  case 8: 
  printf ("X:");  
  scanf ("%d", &x); 
 result=  pow(x, 3);
 printf ("Result: %.2f\n", result);
 break;
 

  case 9: 
  printf ("X:");  
  scanf ("%d", &x);
  printf ("Y:");
  scanf ("%d", &y); 
 result=  pow(x, y);
 printf ("Result: %.2f\n", result);
 break;
 
 case 10:
 printf ("X:");
 scanf ("%f", &a);
 result= a / 100;
 printf ("Result: %.2f\n", result);
break;

case 11: 
printf ("X:");
scanf("%f", &a);
result= log10(a);
printf ("Result: %.2f\n", result);
break;

  case 12:
 printf ("X:");
 scanf ("%d", &x);
 printf ("Y:");
 scanf ("%d", &y);
 result= x % y;
 printf ("Result: %.2f\n", result);
break;

  }                                                                       
}

  } while (choice!=0);

 printf ("      \nThank you\n\n");


    return 0;
}