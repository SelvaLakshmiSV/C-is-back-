#include<stdio.h>
int main()
{
    int number1,number2,i,sum = 0,temp;
    printf("Enter two numbers\n");
    scanf("%d %d",&number1,&number2);
    if(number2 < number1){
          temp = number1;
          number1 = number2;
          number2 = temp;
    }
    for(i = number1;i<=number2;i++){
        if(i % 2 == 0){
            sum = sum + i;
        }
    }

    printf("The sum of numbers divisible by 2 between the numbers is %d.",sum);
    return 0;
}
