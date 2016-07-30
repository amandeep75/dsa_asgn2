#include <stdio.h>
#include "a7.h"
void main(){
 char ch[100],ch1[100];
 int i;
 printf("Provide the string1:\n");
 scanf("%s",ch);
 printf("provide the string2:\n");
 scanf("%s",ch1);
 i=comp(ch,ch1);
 if(i==1)
 {
     printf("Strings Matched");
 }
 if(i==0)
 {
     printf("Strings did not Matched");
 }
}
