#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define tc ll test;cin >> test;while(test--)
#define vi vector<ll>
#define pll pair<ll,ll>
#define pb push_back
#define mp make_pair
#define INF 1e18
#define MOD 1000000007
#define ff first
#define ss second
#define in >>
#define out <<
#define space << " " <<
#define spacef << " "
#define fo(i,a,b) for(ll i = a; i <= b; i++)
#define nextline out "\n"
#define print(x) for(auto i : x ) cout out i spacef
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)
#define N 105
int  freq[101]={0} ;

int main()
{
map <string , int > mp ; 
mp ["Tetrahedron"] =4 ;
mp ["Cube"] =6 ; 
mp ["Octahedron"]= 8 ;
mp ["Dodecahedron"] =12 ;
mp ["Icosahedron"] =20 ;;
ll sum =0 ; 
int n; 
cin >> n; 
while (n--)
{
  string s ;
  cin >> s ;  
  sum += mp [s] ; 

}
cout << sum ;


} 
