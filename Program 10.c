#include<stdio.h>
int main()
{
    int nod,year,weeks,days;
    printf("Enter the number of days\n");
    scanf("%d",&nod);
    year  = nod / 365 ;
    weeks = (nod % 365) / 7;
    days = (nod%365)%7;
    printf("Year = %d\n",year);
    printf("Weeks = %d\n",weeks);
    printf("Days = %d\n",days);


    return 0;
}
