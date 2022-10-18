/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int t; cin>> t;
    while(t--) {
        int n; cin>>n;
        int ans=0;
        while(n>0) {
            ans += (n&1);
            n >>= 1;
        }
        cout<< ans-1 << endl;
    }
       
    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int t; cin>> t;
    while(t--) {
        int n; cin>>n;
        int ans=-1;
        while(n>0) {
           ans = n%2 ? ans+1 : ans;
           n/=2;
        }
        cout<< ans << endl;
    }
       
    return 0;
} */
/* 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int t; cin>> t;
    while(t--) {
        int n; cin>>n;
        int ans=0;
        while(n>0) {
            n  &= n-1;
            ans++;
        }
        cout<< ans-1 << endl;
    }
       
    return 0;
}
 */

 
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int num;
	    cin>>num;
	    string str;
      while(num){
      if(num & 1) // 1
        str+='1';
      else // 0
        str+='0';
      num>>=1; // Right Shift by 1 
    }   
    int k=0;
    
      for(int i=str.size()-1 ; i>=0 ; i--)
  {
      if(str[i]=='1') k++;
  }
   cout<<k-1<<endl;
	}

return 0;

}


