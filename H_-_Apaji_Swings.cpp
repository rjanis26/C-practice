#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld I64
#define mod 1000000007


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int count = 0,flag = 0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[j]<a[i])
					count++;
			}
			if(a[i]-2 > i){
				flag = 1;
				break;
			}
		}
		if(flag)
			cout<<"Not Allowed\n";
		else
			cout<<count<<endl;
	}
	return 0;
}