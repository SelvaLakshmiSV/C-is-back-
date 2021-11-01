#include<stdio.h>
int main()
{
    int clone,number,rem,rev = 0;
    printf("Enter a number\n");
    scanf("%d",&number);
    clone = number;
    while(number > 0){
        rem = number % 10;
        rev = rev * 10 + rem;
        number = number / 10;

    }
    if(clone == rev){
        printf("The given number %d is a palindrome number.\n",clone);
    }
    else
        printf("The given number %d is not a palindrome number.\n",clone);


    return 0;
}
