 /* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
  
    int test; cin>> test;
    while(test--) {
        int ans=0, count =0;
        int n; cin>>n;
            int arr[n];
        for(int i=0; i<n; i++) 
            cin>> arr[i];
        
        for(int i=0; i<n; i++) {
            if(arr[i] == arr[i+1]) {
                count++;
                cout<< 0 << endl;
                return 0;
            }
            else {
                //count++;
                ans += arr[i];
            }
                
        }

        cout << ans/count << endl;

    }
     

    return 0;

}
 

  */
 /* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
  
void solution() {
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    ll x = *min_element(arr.begin(), arr.end());
    ll ans = count(arr.begin(), arr.end(), x);

    cout<< abs(ans - n) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int test; cin>> test;
    while(test--) {
        solution();
    }
 
    return 0;

}
 */
     
 
/* 
  #include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,c=0,x,i,m=INT_MAX;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            m=min(a[i],m);
        }

        for(i=0;i<n;i++){
                if(a[i]>m) c++;
        }
        cout<<c<<endl;
    }
    return 0;
}   */

 