/* #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int reverse(int n) {

    int rev = 0;
    while(n>0) {
        int digit = n%10;
        rev = rev *10 + digit;
        n/=10;
    }

    return rev;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n; cin>> n;
    
    int ans = reverse(n);

    if(ans== n) 
        cout << "Yes" << endl;
    else    
        cout<<"No" << endl;

 

    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string  str; cin >> str;
    string rev;

    for(int i=str.length()-1; i>=0; i--) 
        rev = rev + str[i];
    
    if(str== rev)
        cout<<"Yes" << endl;
    else 
        cout << "No" << endl;

 
 

    return 0;
} */

 