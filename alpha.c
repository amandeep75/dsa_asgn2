#include<stdio.h>
#include "a1.h"
#include "a2.h"
#include "a3.h"
#include "a4.h"
void main()
{	char ch[20],ch1[20],ch2[100],p[2];
	int length,n=0,i=0;
	printf("Provide Word1:");
	scanf("%s",ch);
	length=len(ch);             //To print length of word
	printf("Length of Word1 %d\n",length);
	printf("Provide Word2:");
	scanf("%s",ch1);
	concat(ch, ch1, ch2);
	printf("Concatenated word is %s\n\n", ch2);         //To Concatenate 2 words
	printf("\nTo the Retrieve the first position of given symbol in the string from str1\npress:1\nfrom str2:press:2\n");
	scanf("%d",&n);
	printf("Provide Symbol:");
	scanf("%s",p);
	if(n==1)
    {
        i = retrieve(ch,p);
    }
    else
        i = retrieve (ch1,p);

    printf("%d",i+1);
    printf("\nTo the Retrieve the last position of given symbol in the string from str1\npress:1\nfrom str2:press:2\n");
	scanf("%d",&n);
	printf("Provide Symbol:");
	scanf("%s",p);
	if(n==1)
    {
        i = last(ch,p);
    }
    else
        i = last(ch1,p);

    printf("%d",i+1);
}
