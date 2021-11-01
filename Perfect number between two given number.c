#include<stdio.h>
int main()
{
    int number,sum=0,i,j;
    printf("Enter number : ");
    scanf("%d",&number);
    printf("The perfect number beetween 1 and  %d are ",number);
    for(i = 1;i<number;i++){
        sum= 0;
        for(j = 1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i)
            printf("%d\n",i);
    }

    return 0;
}
