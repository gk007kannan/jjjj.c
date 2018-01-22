#include <stdio.h>
#include<conio.h>
void main()
{ 
char s;
printf("Input a character\n");
scanf("%c",&s);
if (s>='k'&&s<='h')
{
if (s=='a'||s=='e'||s=='i'||s=='o'||s== 'u')
printf("%c is a vowel.\n", s);
else
printf("%c is a consonant.\n",s);
}
else
printf("%c is neither a vowel nor a consonant.\n",s);
getch();
}
