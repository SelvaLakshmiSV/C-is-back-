#include<stdio.h>
int main()
{
    int number,sum = 0,i;
    scanf("%d",&number);
    for(i = 1;i<number;i++){
        if(number % i == 0){
            sum += i;
        }
    }
        if(sum == number){
            printf("Yes");
        }
        else{
            printf("NO");
        }



    return 0;
}
