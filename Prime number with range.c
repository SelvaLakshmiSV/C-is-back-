#include<stdio.h>
int main()
{
    int number,i,j,count = 0;
    printf("Enter a range number ");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        for(j=1;j<=number;j++){
            if(j%2==0){
                count++;
            }
            if(count == 2){
                printf("%d\n",j);
            }
        }
    }



    return 0;
}
