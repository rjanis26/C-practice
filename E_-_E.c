 /* 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int main()
{   

    int t; scanf("%d", &t);
    while(t--) {
        int n; scanf("%d", &n);
        int arr[n];

        for(int i=0; i<n; i++) {
            scanf("%d", &arr[i]);
        }

        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                
                if(arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        int min = arr[1] - arr[0];
        for(int i=2; i<n; i++) {
            if(arr[i] - arr[i-1] < min) {
                min = arr[i] - arr[i-1];
            } 
        }

        printf("%d\n", min);
    }
     
 
    return 0;

} */

 

