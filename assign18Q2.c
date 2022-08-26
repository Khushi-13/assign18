#include<stdio.h>
int main()
{
    char s[20];
    int r;
    printf("enter string");
    gets(s);
    r=strrev(s);
    printf("reverse of %s is %d",s,r);
    getch();


}

