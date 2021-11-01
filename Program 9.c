#include<stdio.h>
int main()
{
  int year;
  printf("Enter year\n");
  scanf("%d",&year);
  printf("              \n");
  if(year%400 == 0 || year % 4 == 0){
    printf("The given year %d is a leap year. ",year);
  }
  else{
    printf("The given year %d is not a leap year. ",year);
  }
}
