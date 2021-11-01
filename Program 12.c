#include<stdio.h>
int main()
{
    int  a,b,mul = 0,i;
    printf("Enter the number and multiplicant\n");
    scanf("%d %d",&a,&b);
    if(b<0){
        a = a + b;
        b = a - b;
        a = a - b;
    }
    if(a>=0){

        for(i = 1;i<=a;i++)
            {
               mul+= b;
        }

    }
    if(a<0){
        for(i = a;i<=-1;i++){
            mul-= b;

        }
    }
    printf("Multiplication = %d ",mul);
    return 0;
}
