#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
            long long n;
            cin>>n;
            long long temp;
            vector<long long> ee(n);
            vector<long long> oo(n);
            vector<pair<long long,long long>> even(n);
            vector<pair<long long,long long>> odd(n);
            long long ce=0,co=0;
            for(long long i=0;i<n;i++)
            {
               cin>>temp;
               if(temp%2==0)
               {
                ee[ce]=temp;
                ce++;
               }
               else
               {
                   oo[co]=temp;
                   co++;
               }
            }
            ee.resize(ce);
            oo.resize(co);
            long long res = 0;
            res += ((ce) * (ce - 1)) / 2;
            res += ((co) * (co - 1)) / 2;
            sort(ee.begin(),ee.end());
            sort(oo.begin(),oo.end());
            if(ce!=0)
            {
                    even[0].first=ee[0];
                    even[0].second=1;
                      long long counter=0;
            /*for(long long i=0;i<ce;i++)
                cout<<ee[i]<<" ";
            cout<<endl;*/
                for(long long i=0;i<ce-1;i++)
                {
                    if(ee[i]==ee[i+1])
                    {
                        even[counter].second++;
                    }
                    else
                    {
                        counter++;
                        even[counter].first=ee[i+1];
                        even[counter].second=1;
                        
                    }
                }
                even.resize(counter+1);
            }
            else
                even.resize(0);
            if(co!=0)
            {
                odd[0].first=oo[0];
                odd[0].second=1;
                long long counter=0;
                for(long long i=0;i<co-1;i++)
                {
                    if(oo[i]==oo[i+1])
                    {
                        odd[counter].second++;
                    }
                    else
                    {
                        counter++;
                        odd[counter].first=oo[i+1];
                        odd[counter].second=1;
                    
                    }
                }
                odd.resize(counter+1);
            }
            else
                even.resize(0);
             for(long long i=0;i<odd.size();i++)
             {
                 
                     long long k=odd[i].second;
                     res-=(((k)*(k-1))/2);
             }
             for(long long i=0;i<even.size();i++)
             {
                 
                     long long k=even[i].second;
                     res-=(((k)*(k-1))/2);
                 
             }
             for(long long i=0;i<odd.size();i++)
             {
                 if((odd[i].first ^ odd[i+1].first)==2)
                    res-=(odd[i].second * odd[i+1].second);
             }
             for(long long i=0;i<even.size();i++)
             {
                 if((even[i].first ^ even[i+1].first)==2)
                    res-=(even[i].second * even[i+1].second);
             }
             cout<<res<<endl;
    }
   return 0;
}