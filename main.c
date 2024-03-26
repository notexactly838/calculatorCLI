#include<conio.h>
#include<stdio.h>

int main() {
  float num1, num2;
  printf("Calculator\n");
  scanf("First number: %f", &num1);
  scanf("Second number: %f", &num2);
  float sum = num1 + num2;
  printf("The sum is %f", sum);
  
}
