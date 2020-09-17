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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
	while( t-- ){
		cin >> n;
		string s;
		cin >> s;
		vector< ll > ans(n, 0);
		queue< ll > q0, q1;
		ll ctr = 0;
		for(int i = 0 ; i < n ; i++){
			if( s[i] == '0' ){
				if( !q1.empty() ){
					ans[i] = q1.front();
					q0.push(q1.front());
					q1.pop();
				}
				else{
					ans[i] = ++ctr;
					q0.push(ctr);
				}
			}
			if( s[i] == '1' ){
				if( !q0.empty() ){
					ans[i] = q0.front();
					q1.push(q0.front());
					q0.pop();
				}
				else{
					ans[i] = ++ctr;
					q1.push(ctr);
				}
			}
		}
		cout << ctr << endl;
		for(int i = 0 ; i < n ; i++)
			cout << ans[i] << " ";
		cout << endl;
	}
	return(0);
}