char * substitute(char ch[], char p[], int n){

int i=0,j=n;
while(ch[j] != '\0' && p[i] != '\0')
{
    ch[j]=p[i];
    j++;
    i++;
}
return ch;
}
