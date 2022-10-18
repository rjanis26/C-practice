/* 

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    string str; cin>> str;
    ll first, last;
    for(int i=0; i<str.length(); i++) {
        if(str[i] =='A') {
            first = i;
            break;
        }
    }

    for(int i=str.length()-1; i>first; i--) {
        if(str[i] == 'Z') {
            last = i;
            break;
        }
    }
    
    cout<< last - first + 1  << endl;

    return 0;

}
 
 
 */


/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    string str; cin>> str;
    
    int first = str.find_first_of('A');
    int last = str.find_last_of('Z');

    ll ans = last - first +1;
    cout<< ans  << endl;

    return 0;

}
 
 
  */


 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    string str; cin>> str;
    ll first, last;
    for(int i=0; i<str.length()-1; i++) {
        if(str[i] =='A') {
            first = i;
            break;
        }
    }

    for(int i=str.length()-1; i>first; i--) {
        if(str[i] == 'Z') {
            last = i;
            break;
        }
    }
    
    //cout<< last - first + 1  << endl;
    cout<< first << endl;
    cout<< last << endl;


    return 0;

}
 