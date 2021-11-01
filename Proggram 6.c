#include<stdio.h>
int main()
{
    int number,i;
    printf("Enter the number");
    scanf("%d",&number);
    for(i = 0;i<= number;i++){
        if(i % 2 == 1){
            printf("%d  ",i);
        }
        else
            continue;
    }


    return 0;
}
