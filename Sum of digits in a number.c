#include<stdio.h>
int main()
{
    int number,rem,sum = 0;
    scanf("%d",&number);
    while(number > 0){
          rem = number % 10;
          sum = sum + rem;
          number = number / 10;
    }
    printf("%d",sum);

    return 0;
}
