#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int  freq[101]={0} ;

int main()
{
 int n ;
 cin >> n ; 
 map <string ,int > mp ;
 map <int ,string > mp2 ;
 int ma = 0; 
 while (n--)
 {
   string s ;
   cin >>s ;
   mp [s] ++ ;
 ma =max (mp[s],ma) ;
 mp2 [mp[s]] =s ;
 }
 cout << mp2 [ma]  << endl ;
}