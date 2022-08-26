#include<stdio.h>
#include<string.h>
char* remove_extra_spaces(char *s);
int count_words(char *s);
 int main()
 {
     char str[100];
      int no_of_words;
     printf("enter:");
     gets(str);
     printf("string length:%d",strlen(str));
     strcpy(str,remove_extra_spaces(str));
     printf("string length:%d",strlen(str));
     no_of_words=cont_words(str);
     printf("Number of words: %d",no_of_words);
     getch();
 }
 int count_words(char *s)
 {
     int i=0,count=0;
     while(*(s+i)){
        if(*(s+i)==' ')
            count++;
        i++;
     }
     return(count+1);
 }
 char*remove_extra_spaces(char *s)
 {
     char *p;
     int i=0,j=0;
     p=malloc(strlen(s)+1);
     while(*(s+i)){
        while(*(s+i)==' ')
        i++;
        while(*(s+i)!=' '&&*(s+i)!='\0')
        {
            *(p+j)=*(s+i);
            i++;j++;
        }
        if(*(s+i)=='\0'&&*(p+j-1)==' ')
            j--;
        *(p+j)=*(s+i);
        j++;
     }
     return(p);

 }
