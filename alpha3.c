#include <stdio.h>
#include "a6.h"
void main(){
 char ch[100],p[20];
 int l,n;
 printf("Provide the string:\n");
 scanf("%s",ch);
 printf("provide the position:\n");
 scanf("%d",&n);
 printf("Provide the substring:\n");
 scanf("%s",p);
 substitute(ch,p,n);
 printf("%s",ch);
}
