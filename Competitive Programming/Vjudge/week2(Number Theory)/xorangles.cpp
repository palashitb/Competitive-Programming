#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n, m, t, a[100005];
vector< ll > adj[100005];
#define ari for( int i = 0 ; i < n ; i++ ) cin >> a[i];
#define ginp for( int i = 0 ; i < m ; i++ ){ int u, v; cin >> u >> v; adj[u].push_back(v); adj[v].push_back(u);}
#define pb push_back
#define ss second
#define ff first
#define fs first.second
#define fff first.first
#define sss second.second
#define sf second.first

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    ll xorangle = 0;
    for(int i = n ; i > 0 ; i--)
    	for(int j = i - 1 ; j > 0 ; j--)
    		if( ((i ^ j) + j) > i  and (i ^ j) < i + j and (i ^ j) <= n ){
    			// cout << i << " " << j << " " << (i ^ j) << endl;
    			xorangle++;
    		}
    cout << xorangle / 3 << endl;
	return(0);
}