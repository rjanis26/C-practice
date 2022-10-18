/* #include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <list>
#include <stack>
#include <utility>
#include <set>
#include <ctime>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <cctype>

#define LongInt long long
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)

#define BOUNDARY(i, j) (i < 0 || i > row-1 || j < 0 || j > column - 1) 

#define SIZE 100005
#define digit(c) ((c) - '0')
#define PI 3.141592654
#define MAX_INT 2147483646
#define DIFF 10E-7
#define MOD 1000000007

using namespace std;

int f[SIZE];
int tree[SIZE];

int MaxIdx;

int read(int idx)
{
	int sum = 0;
	while(idx > 0)
	{
		sum += tree[idx];
		idx -= (idx & -idx);
	}
	return sum;
}

int update(int idx, int val)
{
	while(idx <= MaxIdx)
	{
		tree[idx] += val;
		idx += (idx & -idx);
	}
}

int query(int i, int j)
{
	return read(j) - read(i-1);
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	
	unsigned i, j, k, l, sum = 0;
	int tc, t, d, x, y, r, n, m, p, q,current, first;
	char ch;
	bool flag;
	
	scanf("%d", &tc);
	getchar();
	
	for(t = 1; t <= tc; t++)
	{
		scanf("%d %d", &n, &q);
		printf("Case %d:\n", t);
		MaxIdx = n;
		
		memset(tree, 0, sizeof tree);
		
		for(i = 1; i <= n; i++)
		{
			scanf("%d", &f[i]);
			update(i, f[i]);
		}
		
		for(i = 0; i < q; i++)
		{
			scanf("%d", &m);

			switch(m)
			{
				case 1:
					scanf("%d", &j); j++;
					update(j, -f[j]);
					printf("%d\n", f[j]);
					f[j] = 0;
					break;
				case 2:
					scanf("%d %d", &j, &k); j++;
					update(j, k);
					f[j] += k;
					break;
				case 3:
					scanf("%d %d", &j, &k); j++, k++;
					printf("%d\n", query(j, k));
					break;
			}
		}
	}
		
	return 0;
}
 */
  
 
#include<bits/stdc++.h>
using namespace std;

#define AE        cout << fixed << setprecision(10);

using ll = long long;
using ld = double;
#define N 100005
 

ll BIT[N];

void update ( ll idx , ll val ) {
    while ( idx<N ){
       BIT[idx]+=val;
       idx+=(idx&-idx);
    }
}

ll query ( ll idx ){
   ll sum = 0;
   while ( idx > 0 ){
       sum+=BIT[idx];
       idx-=(idx&-idx);
   }
   return sum;
}


int main()
{
   /// ios::sync_with_stdio(0);
   /// cin.tie(0);
   /// cout.tie(0);

   int t , tc = 0;
   scanf ( "%d" , &t );

   while ( t-- ){
         printf("Case %d:\n",++tc);
         int n ,q , l , r , v;
         scanf ( "%d%d" , &n , &q );
         ll arr[n+1];
         for ( ll i = 1 ; i <= n ; ++i ) cin >> arr[i] , BIT[i] = 0;

         for ( ll i = 1 ; i<=n ; ++i ){
              update ( i , arr[i] );
         }

         while ( q-- ) {
             int task;
             scanf ( "%d" , &task );
             /// cout << task << "\n";
 
             if ( task == 1 ){
                 scanf ( "%d" , &l );
                 printf ( "%d\n" , arr[l+1]);
                 update ( l+1 , -arr[l+1] );
                 arr[l+1] = 0;
             }
             else if ( task == 2 ){
                 scanf ( "%d%d" , &l , &v );
                 arr[l+1]+=v;
                 update ( l+1 , v );
             }
             else {
                 scanf ( "%d%d" , &l , &r );
                 int x =  query ( r + 1 ) - query ( l );
                 printf ( "%d\n" , x );
             }
         }
   }


}










  
 /* 
 #include <iostream>
#define SIZE 100005
#include <string.h>
#include <stdio.h>

using namespace std;
int a[SIZE];
int n;


long long update(int i, int val)
{

	while(i <= n) {
		a[i] = a[i] + val;
		i = i + (i & (-i));
	}

}

long long query(int i)
{	
	long long ans;
	ans = 0;

	while(i > 0) {
		ans = ans + a[i];
		i = i - (i & (-i));
	}

	return ans;
}

int main()
{
	int t;
	int x;
	int y;
	int w;
	int choice;
	long long ans;
	int q;
	int ch;

	scanf("%d", &t);

	for (int cs = 1; cs <= t; cs++) {
		scanf("%d", &n);
		scanf("%d", &q);
		
		memset(a, 0, sizeof a);

		for (int i = 1; i <= n; i++) {
			scanf("%d", &x);
			update(i, x);
		}



		printf("Case %d:\n", cs);
		for (int i = 0; i < q; i++) {
			scanf("%d", &ch);
			
			switch(ch) {
				case 1:
					scanf("%d", &x);
					x++;
					ans = query(x) - query(x-1);
					update(x, -ans);
					printf("%lld\n", ans);
					break;
				case 2:
					scanf("%d", &x);
					x++;
					scanf("%d", &w);
					update(x, w);
					break;

				case 3:
					scanf("%d", &x);
					scanf("%d", &y);
					x++;
					y++;
					ans = query(y) - query(x -1);
					printf("%lld\n", ans);
					break;

			}
		}
	}
}




 */