 
/* https://www.geeksforgeeks.org/find-the-minimum-number-of-operations-required-to-make-all-array-elements-equal/ */
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int

 int solve(int arr[], int n) {
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++) 
        mp[arr[i]]++;
    
    int max_free= INT_MIN;

    for(auto x : mp) 
        max_free = max(max_free, x.second);
    
    return (n-max_free);


 }
 
int main()
{   

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int test; cin>> test;
    while(test--) {
        int n; cin>> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>> arr[i];

        int ans = solve(arr,n);
        cout<< ans << endl;
    }

    
    return 0;
}  
  