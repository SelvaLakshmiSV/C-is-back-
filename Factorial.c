#include<stdio.h>
int main(){

  int number,fact = 1,i;
  printf("Enter a number for konwing it's factorial = ");
  scanf("%d",&number);
  for(i = 1;i<=number;i++){
    fact = fact * i;
  }

   printf("The factorial of %d is %d .",number,fact);

   return 0;

}
