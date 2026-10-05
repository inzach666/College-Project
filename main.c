#include <stdio.h>
int main()
{
int choice;
float a, b, result;
do
{
printf("\n=========================\n");
printf(" SIMPLE CALCULATOR\n");
printf("=========================\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Exit\n");
printf("\nEnter your choice: ");
scanf("%d", &choice);
if (choice >= 1 && choice <= 4)
{
printf("Enter first number: ");
scanf("%f", &a);
printf("Enter second number: ");
scanf("%f", &b);
}
switch (choice)
{
case 1:
result = a + b;
printf("Result = %.2f\n", result);
break;
case 2:
result = a - b;
printf("Result = %.2f\n", result);
break;
case 3:
result = a * b;
printf("Result = %.2f\n", result);
break;
case 4:
if (b == 0)
printf("Cannot divide by zero.\n");
else Page 5
{
result = a / b;
printf("Result = %.2f\n", result);
}
break;
case 5:
printf("Thank you!\n");
break;
default:
printf("Invalid choice.\n");
}
} while (choice != 5);
return 0;
}
