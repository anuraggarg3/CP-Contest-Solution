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
          freopen("outputt","w",stdout);
  #endif
        int t;
        cin>>t;
        while(t--)
        {
            int n,m;
            cin>>n>>m;
            ll a[m];
            // std::map<ll,ll> mp;
            n=m;
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
                // mp[a[i]]++;
            }
            ll sum=0;
            for(int i=0;i<n;i++)
            {
             // if(a[i]>a[i+1]&&i<n-1) continue;
             // else
             {
                for(int j=0;j<i;j++)
                { 
                    //auto itr=mp.find(a[j]);
                    if(a[i]>a[j])
                    {sum++;
                        // cout<<i+1<<" "<< j+1<<endl;
                        // if(itr->second==1) sum+=1;
                        // else  sum+=itr->second;       //sum+=itr->second; 
                        // sum+=(itr->second++)
                    }
                    // if(a[i]>a[j]) sum++;
                }
             }   
            }
            //  for(auto &itt:mp)
            //  {
            //     cout<<itt.first<<" "<<itt.second<<" ";
            //  }
            // cout<<endl;
            cout<<sum<<endl;
        }
         
          return 0;
        }
