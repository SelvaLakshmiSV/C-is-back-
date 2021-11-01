#include<stdio.h>
int main()
{
    int number,i,temp,sum=0;
    printf("Enter a numbere to know it is a armstrong or not");
    scanf("%d",&number);
    temp = number;
    while(number>0){
        i = number %10;
        sum+=i*i*i;
        number = number / 10;
    }
    if(sum == temp){
        printf("Given number %d is an armstrong number.",temp);
    }
    else{
        printf("Given number %d is not an armstrong number since the sum of cubes of individual digits is %d.",temp,sum);
    }

    return 0;
}
