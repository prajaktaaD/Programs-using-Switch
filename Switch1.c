//1.Write menu driven caculator program (+.Addition,-.Subtraction,/.Division,*.Multiplication)


#include<stdio.h>
int main()
{
  char ch;
  int a,b;
  printf("\nMenu:\n+.Addition\n-.Subtraction,\n/.Division,\n*.Multiplication");
  printf("\nEnter two numbers:");
  scanf("%d%d",&a,&b);
  printf("\nEnter option:");
  scanf(" %c",&ch);
  switch(ch)
  
 {
  case '+':printf("sum=%d",a+b);
           break;
 
  case '-':printf("difference=%d",a-b);
           break;
          
 case '/':printf("quotient=%d",a/b);
           break;

 case '*':printf("product=%d",a*b);
           break;
 }
 
 return 0;
 
 }
           

 
