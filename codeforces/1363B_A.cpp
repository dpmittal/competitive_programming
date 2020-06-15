#include <bits/stdc++.h>
#define long long ll
using namespace std;
int main()
{
	int itr;
	cin>>itr;
	while(itr--){
	    string s;
	    cin>>s;
	    int n = s.length();
	   	vector<pair<int,int> > a(n);
	   	vector<pair<int,int> > b(n);
	   	if(s[0]=='1'){
	   	    a[0].first = 1;
	   	    a[0].second = 0;
	   	}
	   	else{
	   	    a[0].first = 0;
	   	    a[0].second = 1;
	   	}
	   	for(int i = 1 ; i<n; i++){
	   	    if(s[i]=='1'){
	   	        a[i].first = a[i-1].first+1;
	   	        a[i].second=a[i-1].second;
	   	    }
	   	    else{
	   	         a[i].second = a[i-1].second+1;
	   	         a[i].first=a[i-1].first;
	   	    }
	   	}
	   	if(s[n-1]=='1'){
	   	    b[n-1].first = 1;
	   	    b[n-1].second = 0;
	   	}
	   	else{
	   	    b[n-1].first = 0;
	   	    b[n-1].second = 1;
	   	}
	   	for(int i = n-2; i>=0; i--){
	   	    if(s[i]=='1'){
	   	        b[i].first = b[i+1].first+1;
	   	        b[i].second=b[i+1].second;
	   	    }
	   	    else{
	   	         b[i].second = b[i+1].second+1;
	   	         b[i].first=b[i+1].first;
	   	    }
	   	}
	   	int ans  = INT_MAX;
        int curr;
	   	for(int i = 0; i<n; i++){
	   	    curr = min(a[i].first + b[i].second, b[i].first + a[i].second);
	   	    ans = min(ans,curr);
	   	}
	   cout<<ans-1<<endl;
	}

  return 0;
}