
 /* 
#include <stdio.h>
#include <string.h>
int main ()
{
      char s[1000];
      int i, j = 0, k, l, ln, arr[1000], m, n, temp;
      scanf("%s", s);
      ln = strlen(s);
      for(i = 0; i < ln; i++)
      {
          if((i % 2) == 0)
          {
              arr[j] = (int) s[i];
              j++;
          }
      }
      for(m = 1; m < j; m++)
     {
          for(n = 0; n < (j - m); n++)
         {
              if(arr[n] > arr[n + 1])
              {
                  temp = arr[n];
                  arr[n] = arr[n + 1];
                  arr[n + 1] = temp;
              }
          }
      }
      for(k = 0; k < j; k++)
      {
          if(k == (j - 1))
          {
              printf("%c", (char) arr[k]);
          }
          else
          {
              printf("%c%c", (char) arr[k], '+');
          }
      }
      printf("\n");

      return 0;
}   
 */
 /* 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int main()
{   
    
    char ch[150];
    int i, l, c1=0, c2=0, c3=0;
    gets(ch);
    l = strlen(ch);
    for(i=0; i<l; i++)
    {
        if(ch[i] == '1')
        {
            c1++;
        }
        else if(ch[i] == '2')
        {
            c2++;
        }
        else if(ch[i] == '3')
        {
            c3++;
        }
    }
    for(i=0; i<c1; i++)
    {
        printf("1");
        if((c2 == 0 && c3 == 0) && i == c1-1)
        {
             printf("\n");
        }
        else
        {
          printf("+");
        }
    }
    for(i=0; i<c2; i++)
    {
        printf("2");
        if(i== c2 - 1 && c3 == 0)
        {
           printf("\n");
        }
        else
        {
            printf("+");
        }
    }
    for(i=0; i<c3; i++)
    {
       printf("3");
        if(i == c3 - 1)
        {
            printf("\n");
        }
        else
        {
            printf("+");
        }
    }
 
    return 0;
} 
 */
/* 
 #include<stdio.h>
 #include<string.h>
 
 int main()
 {
    char str[150];
    gets(str);

    int len= strlen(str);
    
    for(int i=0; i<len; i+=2) {
        for(int j=0; j<len-1; j+=2){

            if(str[j] > str[j+2]) {
                 // swap the string
                 char temp = str[j];
                 str[j] = str[j+2];
                 str[j+2] = temp;
            }
        }
    }

    puts(str);
    //printf("%s", str);

    return 0;
 } */

 
 #include<stdio.h>
 #include<string.h>
 
 int main()
 {
    char str[150];
    gets(str);

    int len= strlen(str);
    
    for(int i=0; i<len; i+=2) {
        for(int j=0; j<len-1; j+=2){
            
            if(str[i] < str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            
            }
        }
     
    puts(str);
    

    return 0;
 }