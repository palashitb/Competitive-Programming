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
	for(int j = 1 ; j <= t ; j++){
		cin >> n;
		string s;
		cin >> s;
		ll one = 0, two = 0;
		for(int i = 0 ; i < s.size() ; i++)
			if( s[i] == 'A' )
				one++;
			else
				two++;
		cout << "Case #" << j << ": ";
		if( llabs(one - two) == 1 )
			cout << "Y" << endl;
		else
			cout << "N" << endl;
	}
	return(0);
}