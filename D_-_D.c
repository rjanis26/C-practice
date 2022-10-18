 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<math.h>
#define ll long long int 

void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b;
    *b = temp;
}

void sort_aray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j])  
                swap(&arr[i], &arr[j]);
        }
    }
}

int main()
{
    ll n, m; scanf("%lld %lld", &n, &m);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    int money=0;
     sort_aray(arr,n);

    for(int i=0; i<n; i++) {
        if(m>0) {
            if(arr[i] <0) {
                money += (abs(arr[i]));
                m--;
            }
        }
        if(m==0) break;
    }

    printf("%d", money);
 

    return 0;
}  
 