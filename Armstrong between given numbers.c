#include<stdio.h>

int main(){
   int number,i,j,temp1,temp2,sum=0;
   printf("Enter a number to know all the armstrong numbers between them\n");
   scanf("%d",&number);
   for(i = 1;i<=number;i++){
          sum = 0;
          temp1 = i;
          temp2 = i;
          while(temp1>0){
              j = temp1 % 10;
              sum += j*j*j;
              temp1 = temp1/10;
          }
          if(sum==temp2){
                printf("%d\n",sum);
          }

   }
return 0;
}
