#include<stdio.h>
int main(){
  int num,i,sum=0;
  printf("Enter a number to know it is perfect or not");
  scanf("%d",&num);
  for(i=1;i<num;i++){
    if(num%i==0)
        sum += i;
  }
  if(sum==num){
    printf("The given number is a perfect number.");
  }
  else{
    printf("The given number is not a perfect number");
  }

return 0;
}

