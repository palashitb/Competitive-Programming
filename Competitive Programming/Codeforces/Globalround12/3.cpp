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
		vector< string > inp(n);
		for(int i  = 0 ; i < n ; i++)
			cin >> inp[i];
		vector< vector< ll > > ctr(3, vector< ll > (2, 0));
		for(int i = 0 ; i < n ; i++)
			for(int j = 0 ; j < n ; j++)
				if( ctr[i][j] == 'X' )
					ctr[(i + j) % 3][0]++;
				else if( ctr[i][j] == 'O' )
					ctr[(i + j) % 3][1]++;
		if( min(ctr[1][0], min(ctr[0][0], ctr[2][0])) == ctr[0][0])
	}
	return(0);
}