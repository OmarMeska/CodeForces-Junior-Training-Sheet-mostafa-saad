#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int  freq[1000009]={0} ;
//this is training for how can i get the changes i did in a file using git 

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