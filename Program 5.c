//C program to print a number is odd or even
#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number % 2 == 0){
        printf("The given number is even.");
    }
    else{
        printf("The given number is odd");
    }

    return 0;
}
