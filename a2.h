void concat(char ch[], char ch1[], char ch2[])
{
    int i=0,j=0;
    while(ch[i] != '\0')
    {
        ch2[i]=ch[i];
        i++;
    }
    ch2[i] = '\0' ;
    i--;
    while(ch1[j] != '\0')
    {
        ch2[i] = ch1[j];
        j++;
        i++;
    }
    ch2[i]='\0';
}
