#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int n,x,y=0;
	    cin>>n>>x;
	    string s;
	    if(x>(n+2)||x<(-n+1))
	    cout<<"-1"<<endl;
	    
	    else if(x>=1)
	     { for(int i=0;i<n-x+1;i++)
	         { s[i]='*';y++;}
	        for(int j=y;j<n;j++)
	          s[j]='+';
	          
	      
	      for(int i=0;i<n;i++)
	    cout<<s[i];
	    cout<<endl;}
	    else
	     {  for(int i=0;i<n-1+x;i++)
	         { s[i]='*';y++;}
	        for(int j=y;j<n;j++)
	          s[j]='-';  
	        
	    for(int i=0;i<n;i++)
	    cout<<s[i];
	    cout<<endl;}
	    }
	    
	
	return 0;
}
