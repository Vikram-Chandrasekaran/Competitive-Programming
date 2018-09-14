#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   long n,x,s;
	   cin>>n;
	   cin>>x;
	   cin>>s;
	   if(n==1)
	    cout<<"1"<<endl;
	   else
	   {
	    long pos1,pos2;
    	   while(s--)
    	   {
    	       cin>>pos1;
    	       cin>>pos2;
    	       if(x==pos1 ||x==pos2)
    	       {
    	           if(x==pos1)
    	                x=pos2;
    	            else
    	                x=pos1;
    	       }
    	        
    	   }
    	   cout<<x<<endl;
	   }
	}
	return 0;
}
