#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int  freq[101]={0} ;

int main()
{
  int n; 
  cin >> n; 
  
  int p  ;
  cin >> p; 
int x ;
for (int i=0 ; i<p; i++)
{
  cin >> x ;
  freq[x] ++ ;


}
int q ;
cin >>q ;
for (int i=0 ;i<q ;i++)
{
  cin >> x ; 
  freq [x ] ++ ;


}
int conter =0 ; 
for (int i=1 ; i<=n ;i++)
{
  if (freq[i] == 0) {
    cout << "Oh, my keyboard!\n" ;
   return 0  ;
  }
  
}

cout << "I become the guy.\n" ;
return 0;

}