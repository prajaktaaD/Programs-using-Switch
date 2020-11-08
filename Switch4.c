#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    
    switch(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
    case 1:printf("character is vowel");
           break;
           
    case 0:printf("character is cosonent");
           break;
    }       
    return 0;
}
