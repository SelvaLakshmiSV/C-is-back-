// Swapping using 3rd variable
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter a \n");
    scanf("%d",&a);
    printf("Enter b \n");
    scanf("%d",&b);
    printf("The value of a before swapping is %d\n",a);
    printf("THe value of b before  swapping is %d\n",b);

    temp = a;
    a = b;
    b = temp;




    printf("The value of a after swapping is %d\n",a);
    printf("The value of b after swappimg is %d",b);

    return 0;
}
