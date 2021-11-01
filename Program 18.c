#include<stdio.h>
int main()
{
    int clone,number,sum = 0,rem;
    printf("Enter a number\n");
    scanf("%d",&number);
    clone = number;
    while(number > 0){
        rem = number % 10;
        sum = sum + rem;
        number = number / 10;
    }
    printf("The sum of all digits in %d is %d.",clone,sum);
    return 0;

}
