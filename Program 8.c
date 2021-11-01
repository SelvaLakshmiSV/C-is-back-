#include<stdio.h>
int main()
{
   int number1,number2;
   printf("Enter two numbers to swap\n");
   scanf("%d %d",&number1,&number2);
   printf("Before swapping\n");
   printf("number1 = %d\n",number1);
   printf("number2 = %d\n",number2);
   number1 = number1 + number2;
   number2 = number1 - number2;
   number1 = number1 - number2;
   printf("After swapping\n");
   printf("number1 = %d\n",number1);
   printf("number2 = %d",number2);
   return 0;
}
