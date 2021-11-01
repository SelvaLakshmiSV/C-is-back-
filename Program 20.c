#include<stdio.h>
int main()
{
    int number,rem,clone;
    int rev_number = 0;

    scanf("%d",&number);
    clone = number;
    while(number > 0){

        rem = number % 10;
        rev_number = rev_number * 10 + rem;
        number = number / 10;

    }
    if(clone == rev_number){
        printf("The given number is a palindrome.");
    }
    else{
        printf("The given number is not a palindrome number.");
    }
    return 0;
}
