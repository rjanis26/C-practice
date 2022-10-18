 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

const int n = 100001;
int arr[n];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    for(int i=0; i<n; i++) 
        cin>> arr[i];

    int count=0;

    for(int i=0; i<n; i++) {
        if(arr[i] >=10) 
            count++;
    }

    cout<< count << endl;

    return 0;

}

    

 