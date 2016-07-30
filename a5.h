int substr(char ch[], char p[]){

int i=0,j=0,n=0;
while( ch[i] != '\0' && p[j] != '\0')
{
    if(ch[i]==p[j])
    {
        i++;
        j++;
    }
    else
    {
    j=0;
    i++;}
}
return (i-j+1);
}
