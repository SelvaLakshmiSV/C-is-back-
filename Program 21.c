//Sum of all intergers divisible by 2
#include<stdio.h>
int main()
{
    int number1,number2;
    int sum = 0;
    int i;


    printf("Enter number1 and number 2\n");\
    scanf("%d",&number1);
    scanf("%d",&number2);
    for(i = number1;i<=number2;i++){
        if(i % 2 == 0){

            sum += i;
        }
    }

    printf("Sum of all integers divisible by 2 between %d and %d is %d.",number1,number2,sum);
    return 0;
}
