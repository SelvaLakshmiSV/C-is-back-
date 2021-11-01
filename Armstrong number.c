#include<stdio.h>
int main()
{
    int number,temp,i,j,sum = 0;
    scanf("%d",&number);
    temp = number;
    while(number>0){
        i = number % 10;
        sum += i*i*i;
        number = number/10;
    }
    if(sum == temp){
        printf("Armstrong number");
    }
    else{
        printf("The given number is not an armstrong number.");
    }
    return 0;
}
