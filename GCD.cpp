//#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE

		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
#endif
	



	// your code goes here
	int x,y,i,t;
	cin>>t;
	
	for(i=0;i<t;i++)
	{
	    cin>>x>>y;
	    int m=max(x,y);
	    int n=min(x,y);
	    
	    
	    while(x!=y && (x!=1 && y))
	    {
	        
	        if(x>y)
	        	x=x-y;
	        else
	        	y=y-x;	        		        
	    }
	    cout<<x<<endl;
	    
	  
	}
	return 0;
}

	

