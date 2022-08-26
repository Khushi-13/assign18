#include<stdio.h>
#include<string.h>
void main(){

   char string1[25],string2[25];
   int value;

   printf("Enter String 1: ");
   gets(string1);
   printf("Enter String 2: ");
   gets(string2);

   value = strncmp(string1,string2,4);

   if(value==0){
      printf("%s is same as %s",string1,string2);
   } else if(value>0) {
      printf("%s is greater than %s",string1,string2);
   } else {
      printf("%s is less than %s",string1,string2);
   }
}

