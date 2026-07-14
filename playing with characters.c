 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch;
scanf(" %c",&ch);
printf("%c\n",ch);
char s[100];
scanf("%s",s);
printf("%s",s);
char sen[200];
scanf("%[^\t]%*s",sen);
printf("%s",sen);
  return 0;
}