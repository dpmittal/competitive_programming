#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t,n,x,s,p,f,e;

	cin>>t;
	while(t--){
	cin>>n>>x>>s;

	int a[n+1]={0};

	a[x]=1; p=x;

	while(s--){
		cin>>f>>e;

		if(a[f]==1){a[e]=1; p=e; a[f]=0;}
		else if(a[e]==1){
		 a[f]=1; p=f; a[e]=0;
		}
	}

	cout<<p<<endl;
	}
}