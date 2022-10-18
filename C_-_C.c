 
  /*  #include<stdio.h>
#include<string.h>

int main()
{

    int t; scanf("%d", &t);

    while(t--) {
        int n; scanf("%d", &n);
        int arr[n];
        for(int i=0; i<n; i++) 
            scanf("%d", &arr[i]);   

        int l=0, r=n-1;

        while(n>0) {
            if(n>0) {
                printf("%d ", arr[l]);
                n--;
                l++;
            }
            if(n >0) {
                printf("%d ", arr[r]);
                n--;
                r--;
            }
        }
        printf("\n");
    }

 
    return 0;
} */
      



 /* 
#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        int arr[n], arr1[n];
        for (int i = 1; i <= n; i++){
            scanf("%d", &arr[i]);
        }
        int a = 1, b = n, sum = n, now = 1;
        int f = 1;
        while (sum--){
            if (f){
                arr1[now++] = arr[a];
                a++;
                f = 0;

            } else {
                arr1[now++] = arr[b];
                b--;
                f = 1;
            }
        }
        for (int i = 1; i <= n; i++){
            printf("%d ", arr1[i]);
        }
        printf("\n");
    }
}   */


#include<stdio.h>
#include<string.h>

int main()
{ 
     
    int t; scanf("%d", &t) ;

    while(t--) {
        int n; scanf("%d", &n);

        int arr[n];
         for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);


        int l=0, r=n-1;

        while(n>0) {              // until array size n > 0
            if(n>0) {
                printf("%d ", arr[l]);   
                n--;
                l++;
            }
            if(n>0) {
                printf("%d ", arr[r]);
                n--;
                r--;
            }
        }

        printf("\n");
    }
     
    return 0;
}  


 