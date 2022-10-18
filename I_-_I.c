 /* 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#define ll long long int

int last_two_digit(ll n) {

    int one= n%10;
    n/=10;

    int digit = n%10;
    digit *= 10;

    n=digit+one;

    return n;
} 


int main()
{
    int n; scanf("%d", &n);

    ll p=1;
    p=pow(5,n);

    int ans=last_two_digit(p);
    printf("%d", ans);
 
    return 0;
}    
 */
 
/* 

#include<stdio.h>
#include<string.h>

int main() 
{

    long long int num; 
    scanf("%lld", &num);

    printf("25");

 
    return 0;
} */

 