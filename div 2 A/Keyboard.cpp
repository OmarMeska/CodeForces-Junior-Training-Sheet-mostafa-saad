#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int  freq[1000009]={0} ;

int main()
{char r ;
cin >> r; 
string t ; 
cin >>t ; 
  string s  ="qwertyuiopasdfghjkl;zxcvbnm,./"; 
 map <char ,int > mp ;
 map <int ,char > mp2 ;
  for (int i=0 ; i<s.size() ; i++)
  {
     mp [s[i]] = i ;
     mp2 [i] =s[i] ;

  }
  if (r =='R')
  {
    for (int i=0 ; i<t.size() ; i++)
    {
       cout << mp2 [mp[t[i]]-1]  ;  
    }
  }
  else 
  {
    for (int i=0 ; i<t.size() ; i++)
    {
       cout << mp2 [mp[t[i]]+1]  ;  
    }
  }


  
}