#include<bits/stdc++.h>
#define endl "\n"
#define ll long long 
#define mod 1000000007
using namespace std;

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
  int n;
  cin>>n;
  ll a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
 if(n>4){
        cout<<"NO"<<endl;
        
    }
    else
    {
  cout<<"YES"<<endl;
   for(int i=0;i<n;i++)
   {
        if(i%4==0)
            cout<<a[i]<<" "<<"0"<<endl;
        else if(i%4==1)
            cout<<"0"<<" "<<a[i]<<endl;
        else if(i%4==2)
            cout<<-a[i]<<" "<<0<<endl;
        else
            cout<<0<<" "<<-a[i]<<endl;
    }
  }
  }
     return 0;
      }
