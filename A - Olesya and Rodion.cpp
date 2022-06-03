#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
int  freq[101]={0} ;

int main()
{
  int n ; 
  cin >> n; 
  vector <pair <int ,int >> vp (n);
  for (auto &i : vp)cin >> i.first >> i.second ;
vector <pair <int ,int >> vp2 (n);
vp2 =vp ;
sort (vp2.rbegin (), vp2.rend ());

for (int i=0 ; i< n; i++)
{
  if (vp[i].first != vp[i].second)
  {
    cout << "rated\n" ;
    return 0 ;
  }
}
if (vp2 ==vp) 
{
  cout << "maybe\n" ;
  return 0 ; 
}
else 
{
  cout << "unrated\n" ;

}

}