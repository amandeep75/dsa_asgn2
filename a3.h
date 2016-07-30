int retrieve(char ch[], char p[]){
 int i=0;
 while(ch[i] != p[0] || ch[i]== '\0')
 {
     i++;
 }
 return i;
}
