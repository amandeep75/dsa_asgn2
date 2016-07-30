int comp(char ch[], char ch1[]){

 int i=0,j=0;
 while(ch[i] != '\0')
 {
     i++;
 }

 while(ch1[j] != '\0')
 {
     j++;
 }
 if(i==j)
 {   int k=0,l=0;
     while(ch[k] != '\0')
     {
         if(ch[k] == ch1[l])
         {
             return 1;
         }
         else
            return 0;
     }
     return 1;
 }
 else
    return 0;
}
