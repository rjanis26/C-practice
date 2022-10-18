#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'

void solve() {
    int n, k; cin>> n>> k;
    int arr[n+2];
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    int ans=0;
    for(int i=0; i<n; i++) {
        if(arr[i] > k)
            ans++;
    }

    cout<< ans << endl;
}

int main()
{

    int test; cin>> test;
    while(test--) {
        solve();
    }

 

    return 0;
}