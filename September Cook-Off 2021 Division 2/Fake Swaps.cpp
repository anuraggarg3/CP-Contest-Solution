#include<bits/stdc++.h>
#define endl "\n"
#define ll long long 
#define mod 1000000007
using namespace std;
int solve()
{  int n;
  cin>>n;
  string s;
    string p;
    cin>>s>>p;
    if(s==p)
    {
      cout<<"YES"<<endl;
      return 0 ;
    }
    int sz=0;
    int so=0;
    for(int i=0;i<n;i++)
    {
      if(p[i]=='0') sz++;
      else so++;

    }
     if(so>0&&sz>0)
     {
      cout<<"YES"<<endl;
     } 
     else
     {
      cout<<"NO"<<endl;
     }
     return 0;
   }
int main()
{
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
          freopen("input","r",stdin);
          freopen("outputf.txt","w",stdout);
  #endif
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
          return 0;
        }
