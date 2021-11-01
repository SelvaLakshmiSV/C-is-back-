#include<stdio.h>
int main()
{
    int number,clone,remainder;

    int reverse_number = 0;
    scanf("%d",&number);
    while(number!=0){
          remainder = number % 10;
          reverse_number = reverse_number * 10 + remainder;
          number = number / 10;
    }
    printf("%d",reverse_number);


    return 0;
}
