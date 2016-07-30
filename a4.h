int last(char ch[], char p[])
{
    int i=0,n=0;
    while(ch[i] != '\0')
    {
    if(ch[i]==p[0])
        {   n=i;
        }
    i++;
    }
    return n;
}
