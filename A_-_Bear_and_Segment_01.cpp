/* #include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'

void solve() {
    string str;
    cin>>str;
    int count = 0;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == '1' and str[i] != str[i+1])
            count++;
    }

    if(count ==1)   
        cout<<"YES" << endl;
    else 
        cout<<"NO" << endl;
}

int main()
{

    int test; cin>> test;
    while(test--) {
        solve();
    }

 

    return 0;
} */



#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define endl '\n'

void solve() {
    string str;
    cin>>str;
    
    int first = -1, last;
    for(int i=0; i<str.length(); ++i) {
        if(str[i] == '1') {
            first = i;
            break;
        }
    }

    if(first == -1) {
        cout<<"NO" << endl;
        return;
    }

    for(int i=str.length()-1; i>=0; i--) {
        if(str[i] == '1') {
            last = i;
            break;
        }
    }
    
    bool ans = true;
    for(int i= first; i<= last; i++) {
        if(str[i] =='0') {
            ans = false;
            break;
        }
    }

    (ans == true) ? cout << "YES" << endl : cout<<"NO" << endl;

}

int main()
{

    int test; cin>> test;
    while(test--) {
        solve();
    }
 
    return 0;
}