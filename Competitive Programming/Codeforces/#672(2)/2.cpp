#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
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
#define mp make_pair
void printar(vector< ll > ar, ll l, ll r){
	for(int i = l ; i < r ; i++)
		cout << ar[i] << " ";
	cout << endl;
}
	
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
	while( t-- ){
		cin >> n;
		ll num = 0;
		vector< ll > sz(31, 0);
		for(int i = 0 ; i < n ; i++){
			cin >> num;
			ll temp = 1, size = 0;
			while( num > 0 ){
				size++;
				num /= 2;
			}
			sz[size]++;
		}
		ll ans = 0;
		for(int i = 0 ; i < 31 ; i++){
			ans += (sz[i] * (sz[i] - 1)) / 2;
		}
		cout << ans << endl;
	}
	return(0);
}