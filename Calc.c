#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

FILE *pr= fopen("/Users/abirmahmood/Documents/Projects/Scientific Calculator Project/prev_result.txt", "r+");

/*
if (pr== NULL) {
  printf ("File Error");
}         
 else {
  printf ("File is opened");
 } 
*/

int x, y, choice;
float a, b, result;
char prev_result [50];
double c, result2;

printf ("\n*******************************\n");
printf ("     Welcome to Calculator\n");
printf ("*******************************\n");
printf ("Choose your operation:\n");
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
printf("13. Sin(x)\n");
printf("14. Cos(x)\n");
printf("15. Tan(x)\n");

printf ("\n      Press 0 to QUIT\n");
printf ("Press 16 for previous results\n");
printf ("-----------------------------\n");

do{
printf ("\nChoice:");
scanf ("%d", &choice);
  
if (choice < 0 || choice >16) {
printf ("Choose operations between 1-16\n"); 
} 

else {
switch (choice) {

case 1: 
printf ("--Addition--\n");
printf ("X:");
scanf("%f", &a);
printf ("Y:");
scanf ("%f", &b);
result= a + b;
printf ("Result: %.2f\n", result);
fprintf (pr, "--Addition--\n X: %.1f \t Y: %.1f \n result: %.2f\n\n", a, b, result);
break;

case 2: 
printf ("--Substraction--\n");
printf ("X:");
scanf("%f", &a);
printf ("Y:");
scanf ("%f", &b);
result= a - b;
printf ("Result: %.2f\n", result);
fprintf (pr, "--Substraction--\n X: %.1f \t Y: %.1f \n result: %.2f\n\n", a, b, result);
break;

case 3: 
printf ("--Multiplication--\n");
printf ("X:");
scanf("%f", &a);
printf ("Y:");
scanf ("%f", &b);
result= a * b;
printf ("Result: %.2f\n", result);
fprintf (pr, "--Multiplication--\n X: %.1f \t Y: %.1f \n result: %.2f\n\n", a, b, result);
break;

case 4: 
printf ("--Division--\n");
printf ("X:");
scanf("%f", &a);
printf ("Y:");
scanf ("%f", &b);
result= a / b;
printf ("Result: %.2f\n", result);
fprintf (pr, "--Division--\n X: %.1f \t Y: %.1f \n result: %.2f\n\n", a, b, result);
break;

case 5: 
printf ("--Square Root--\n");
printf ("X:");
scanf("%d", &x);
result= sqrt (x);
printf ("Result: %.2f\n", result);
fprintf (pr, "--Square Root--\n X: %.d \n result: %.2f\n\n", x, result);
break;

case 6: 
printf ("--Cube Root--\n");
printf ("X:");
scanf("%d", &x);
result= cbrt (x);
printf ("Result: %.2f\n", result);
fprintf (pr, "--Cube Root--\n X: %d \n result: %.2f\n\n", x, result);
break;

case 7: 
printf ("--X^2--\n");
printf ("X:");  
scanf ("%d", &x); 
result=  pow(x, 2);
printf ("Result: %.2f\n", result);
fprintf (pr, "--X^2--\n X: %d  \n result: %.2f\n\n", x, result);
break;

case 8: 
printf ("--X^3--\n");
printf ("X:");  
scanf ("%d", &x); 
result=  pow(x, 3);
printf ("Result: %.2f\n", result);
fprintf (pr, "--X^3--\n X: %d \n result: %.2f\n\n", x, result);
break; 

case 9: 
printf ("--X^Y--\n");
printf ("X:");  
scanf ("%d", &x);
printf ("Y:");
scanf ("%d", &y); 
result=  pow(x, y);
printf ("Result: %.2f\n", result);
fprintf (pr, "--X^Y--\n X: %d \t Y: %d \n result: %.2f\n\n", x, y, result);
break;
 
case 10:
printf ("--Percentage--\n");
printf ("X:");
scanf ("%f", &a);
result= a / 100;
printf ("Result: %.2f\n", result);
fprintf (pr, "--Percentage--\n X: %.1f \n result: %.2f\n\n", a, result);
break;

case 11: 
printf ("--log10(x)--\n");
printf ("X:");
scanf("%f", &a);
result= log10(a);
printf ("Result: %.2f\n", result);
fprintf (pr, "--log10(x)--\n X: %.1f\n result: %.2f\n\n", a, result);
break;

case 12:
printf ("--Modulus--\n");
printf ("X:");
scanf ("%d", &x);
printf ("Y:");
scanf ("%d", &y);
result= x % y;
printf ("Result: %.2f\n", result);
fprintf (pr, "--Modulus--\n X: %d \t Y: %d \n result: %.2f\n\n", x, y, result);
break;

case 13: 
printf("--Sin(x)--\n");
printf ("X:");
scanf ("%lf", &c);
result2= sin(c * 3.14159/180);
printf ("Result: %.2lf\n", result2);
fprintf (pr,"--Sin(x)--\n X: %lf \n result %.2lf\n\n", c, result2);
break;

case 14: 
printf("--Cos(x)--\n");
printf ("X:");
scanf ("%lf", &c);
result2= cos(c * 3.14159/180);
printf ("Result: %.2lf\n", result2);
fprintf (pr,"--Cos(x)--\n X: %lf \n result %.2lf\n\n", c, result2);
break;

case 15: 
printf("--Tan(x)--\n");
printf ("X:");
scanf ("%lf", &c);
result2= tan(c * 3.14159/180);
printf ("Result: %.2lf\n", result2);
fprintf (pr,"--Tan(x)--\n X: %lf \n result %.2lf\n\n", c, result2);
break;

case 16:printf ("Previous result: \n\n");
while (fgets (prev_result, 50, pr) != NULL) {
printf ("%s", prev_result);
}
break;

  }                                                                       
 }

} while (choice!=0);

printf ("      \nThank you for using the calculator!\n\n\n"); 
fclose (pr);


exit (0);
return 0;
}