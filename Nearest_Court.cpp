#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int t; cin>> t;
    while(t--) {
       int a, b; cin>> a>> b;
        int mid = (a+b)/2;
        cout<< max((a-mid),(b-mid)) << endl;
    }
 
    return 0;
}
  
 