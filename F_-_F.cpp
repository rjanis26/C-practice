 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int n= 100;
int arr[n];
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    // for(int i=0; i<3; i++)
    //     cin>>arr[i];
    
    // int count = 0;
    // for(int i=0; i<3; i++) {
    //     if(arr[i] != arr[i+1])
    //         count++;
    // }
    
    // cout<< count << endl;


    ll a, b, c, x;
    cin>> a >> b>> c;

      if(a==b && b==c) x = 1;
    else if(a==b || b==c || a==c) x = 2;
    else x = 3;
    cout<<(x);
    

    return 0;

}
 
 