#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int  freq[101]={0} ;

int main()
{
 string s ;
 cin >> s ; 
 int n = s.length() ; 
 vector <string > stv ; string t ;

 for (int i=0 ; i<n ; i++)
 {
  
    if (s[i] == 'W' and s[i+1] == 'U' and s[i+2] == 'B')
     {  
       if (t != "")
       {

       
       stv .push_back (t) ;
   
   t ="" ;}
   i +=2 ;
    }
    
    else 
    {
      t+= s[i] ; 
    }
 }if (t!="")
 {
   stv .push_back (t) ;
 }
 for (auto i :stv ) cout << i <<" " ;

} 
