

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'

void solve() {
   
   int n, k; cin>> n >> k;
   int arr[n+2];
   for(int i=0; i<n; i++) 
    cin>> arr[i];

    int sum=0, product=1, count=0;
    for(int i=0; i<n; i++) {
        sum=0, product=1;
        
        for(int j=i; j<n; j++) {
            sum += arr[j];
            product *= arr[j];
            if(sum == product)
                count++;
        }
    }

    cout << count << endl;
}

int main()
{

    int test; cin>> test;
    while(test--) {
        solve();
    }
 
    return 0;
}