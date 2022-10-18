  /* #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'
 
int main()
{

    int test; cin>> test;
    while(test--) {
        
          ll ans=0;
        int n; cin>> n;
        int arr[n], brr[n];
        for(int i=0; i<n; i++) {
            cin>> arr[i];
            cin>> brr[i];
        }
    
        for(int i=0; i<n; i++)  {
            ans = max((ans, arr[i] * 20 - (10 * brr[i])));
        }
    
    cout<< ans << endl;
    }

 

    return 0;
}  

 */



 /* 
#include<bits/stdc++.h>
using namespace std;
  
const int N = 200;
int aa[N], bb[N];

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
 
    int t; cin>>t;
    int n,a,b, ans = 0;
    while(t--) {
    	cin>>n; ans = 0;
    	for(int i=0; i<n; i++) {
    		cin>>aa[i];
    	}
    	for(int i=0; i<n; i++) cin>>bb[i];
    	for(int i=0; i<n; i++)  {
    		ans = max(ans, aa[i] * 20 - (10 * bb[i]));
    	}
    	cout<<ans<<endl;
    }

    return 0;
}   */


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int count_free(int arr[], int n) {
    
    int counter[1001] = {0};

    for(int i=0; i<n; i++) {
        int x=arr[i];
        counter[x]++;
    }

    int ans = INT_MIN;
    for(int i=0; i<n; i++) {
        ans = max(ans, counter[i]);
    }

    return (n-ans);
     
   
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int t; cin>>t;
    while(t--) {
        
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>> arr[i];
        int ans= count_free(arr,n);
        cout<< ans << endl;
    }
     




    return 0;
}

 