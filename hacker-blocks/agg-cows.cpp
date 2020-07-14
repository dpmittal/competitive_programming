#include<bits/stdc++.h>
using namespace std;

bool canPlace(int cows, int *a, int m, int n){
    int c = 1;
	int pos = a[0];

	for(int i=1;i<n;i++){
		if(a[i]-pos>=m){
			c++;
			pos = a[i];
			
			if(c==cows){
				return true;
			}
		}
	}
    return false;
}

int main(){

    int n, c;
    cin>>n>>c;
    int *a = new int[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    //sort the array
    sort(a, a + n);
    
    //Binary Search
    int s = 0;
    int e = a[n - 1] - a[0];
    int ans = -1;
    while(s<=e){
        int m = (s+e)/2;
        if(canPlace(c, a, m, n)){
            ans = m;
            s = m+1;
        }
        else{
            e = m - 1;
        }
    }

    cout<<ans<<'\n';
    return 0;
}