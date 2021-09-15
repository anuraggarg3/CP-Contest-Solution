#include<bits/stdc++.h>
#define endl "\n"
#define ll long long 
#define mod 1000000007
using namespace std;
int solve()
{
  ll n,k;
          cin>>n>>k;
          ll a[n];

          ll b[n];
          ll chh=0;
          for(int i=0;i<n;i++)
           {
            cin>>a[i];
            if(a[i]==0) chh++; 
            b[i]=a[i];
           }
           if(k==0||chh==n)
           {
            ll summ=0;
            for(int i=0;i<n;i++)
            {
             summ+=a[i]; 
            }
            cout<<summ<<endl;
            return 0;
           }
           ll c=0;
           // ll count=0;
           while(1)
           {
         ll count=0;
          for(int i=0;i<n;i++)
           {
            if(a[i]!=0)
            {
              if(i!=0&&i!=n-1)
              {
                b[i-1]++;
                b[i+1]++;
                // i++;
              }
              else if(i==0)
              {
                b[i+1]++;
                b[n-1]++;
                // i++;
              }
              else if(i==n-1)
              {
                b[0]++;
                b[i-1]++;

              }
            }
            else
            {
              count++;
            } 
           }
           for(int i=0;i<n;i++)
           {
             a[i]=b[i];
           }
           c++;
           if(count==0||c==k)
           {
             ll sum=0;
            for(int i=0;i<n;i++)
            {
             sum+=a[i]; 
            }
            if(k<=c)
            { 
              // for(int i=0;i<n;i++)
              // {
              //  cout<<a[i]<<" "; 
              // }
              // cout<<endl;
              cout<<sum<<endl;
              // cout<<c<<endl;
            }
            else
            {
             cout<< 2*n*(k-c)+sum<<endl;

            }
            return 0;
           }

         }
}
int main()
{
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
          freopen("input","r",stdin);
          freopen("outputt","w",stdout);
  #endif
        
         int t;
         cin>>t;
         while(t--)
         {
          solve();
         }
          return 0;
        }
