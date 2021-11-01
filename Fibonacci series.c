#include<Stdio.h>
int main(){
   int a = 0,b = 1,num,c,count;
   printf("Enter a number\n");
   scanf("%d",&num);
   printf("Fibonacci series \n");
   printf("%d\n",a);
   printf("%d\n",b);
   count = 2;
   while(count < num){
      c = a + b;
      a = b;
      b = c;
      printf("%d\n",c);
      count++;
   }

   return 0;

}
