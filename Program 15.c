#include<stdio.h>
int main()
{
    int a[5],i,j,t;
    printf("Enter 5 numbers 1 by 1\n");
    for(i = 0;i<5;i++)
        scanf("%d",&a[i]);
    for(i = 0;i < 4;i++)
        for(j = i+1;j<5;j++)
          if(a[i]>a[j]){
             t = a[i];
             a[i] = a[j];
             a[j] = t;
          }
    printf("\n The sorted numbers are : \n");
    for(i = 0;i<5;i++)
        printf("%d\n",a[i]);

    return 0;
}
