#include<stdio.h>
int main()
{
   int number,rem,sum = 0;
   scanf("%d",&number);
   while(number > 0){
       rem = rem % 10;
       sum  = sum * 10 + rem;
       number = number / 10;
   }
   printf("%d",sum);
   return 0;
}
