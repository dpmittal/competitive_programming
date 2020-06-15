#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int s = 1, e = n;
		int ans = 0;
		while(s<=e){
			int mid = (s+e)/2;
			cout<<mid<<endl;
			int a = pow(mid, k);
			if(a==n){
				ans = a;
				break;
			}
			else if(a<n){
				s = mid+1;
				ans = a;
			}
			else
				e = mid-1;
		}
		cout<<ans<<endl;
	}
	return 0;
}
