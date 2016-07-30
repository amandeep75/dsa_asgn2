#include <stdio.h>
#include "a5.h"
void main(){
 char ch[100],p[20];
 int l;
 printf("Provide the string:");
 scanf("%s",ch);
 printf("provide the substring:");
 scanf("%s",p);
 l=substr(ch,p);
 printf("The substring starts at %d",l);
}
