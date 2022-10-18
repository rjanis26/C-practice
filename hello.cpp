#include<bits/stdc++.h>
using namespace std;


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int arr[n+2];

    for(int i=0; i<n; i++) 
        cin>> arr[i];

    int l=0, r=n-1;
    vector<int> v;

    while(l < r) {
        v.push_back(arr[l]);
        v.push_back(arr[r]);
        l++;
        r--;
    }

    if(n%2==1) {
        v.push_back(arr[l]);
    }

     
    for(int i=0; i<v.size(); i++) 
        cout<< v[i] << " ";


    return 0;
}