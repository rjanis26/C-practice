/*  #include<stdio.h>   
#include<string.h>
#include<math.h>
#include<stdlib.h>


int main()
{
     int ans=1;
    int n; scanf("%d", &n);
    int k; scanf("%d", &k);

   

    for(int i=1; i<=n; i++) {
        if((ans+k) < (ans*2)) {
            ans += k;
        }
        else {
            ans *= 2;
        }
   
    }
    printf("%d", ans);

    return 0;
}  
  */
 
/* 
 #include <stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a =1;
    while(n--)
    {
        if(a<k)
        {
            a*=2;
        }else{
            a+=k;
        }
    }
    printf("%d",a);
    return 0;
} */


#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    int count = 1; 
    for(int i = 1; i <= n; i++){
        if(count < k){
            count = count * 2;
        }
        else count = count + k;
    }
    printf("%d\n", count);
    
}