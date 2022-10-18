#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    int a=0;
    scanf("%s", &str);
    int n=strlen(str);
    for(int i=0; i<n; i++) {
        if(str[i] == 'a') 
            a+=1;
    }

    if(a<=n/2) {
        while(a <= n/2) 
        n=n-1;
    }

    printf("%d", n);
 
    return 0;
}