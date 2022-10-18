
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int l, r; scanf("%d %d", &l, &r);

    char str[100001];
    scanf("%s", &str);

    for(int i=l-1, j=r-1; i<r && i<j; i++, j--) {
        int temp= str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("%s", str);
 

    return 0;
}



 