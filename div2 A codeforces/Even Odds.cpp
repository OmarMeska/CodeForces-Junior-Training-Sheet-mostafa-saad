#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int  freq[1000009]={0} ;

int main()
{
  ll n, k ;
  cin >> n >> k ; 
  if (n%2==0)
  {
      ll x =n/2 ;
      
         if (k<=x)
         {
           cout << 2*k-1 ;
         }
         else 
         {
           k-=x;
           cout << 2*k ;
         }
    
  }
  else 
  {
     ll x =n/2 +1 ;
     if (k<=x)
         {
           cout << 2*k-1 ;
         }
         else 
         {
           k-=x;
           cout << 2*k ;
         }
  }
}