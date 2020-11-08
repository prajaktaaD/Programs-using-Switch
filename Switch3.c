#include<stdio.h>
int main()
{
  int num;
  printf("Enter a num:");
  scanf("%d",&num);
  
  switch(num%2)
  {
    case 1:printf("The num is odd");
           break;
    case 0:printf("The num is even");
           break;
  }
 
 return 0;
 
 }
           
