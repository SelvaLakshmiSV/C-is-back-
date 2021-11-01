//Example program to find maximum number in an array
#include<stdio.h>
int main()
{
    int a[5],i,max;
    printf("Enter 5 numbers  one by one \n");
    for(i = 0;i<5;i++){
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(i = 1;i<5;i++)
        if(max < a[i]) max = a[i];
    printf("The maximum no in the array is %d",max);
    return 0;
}
