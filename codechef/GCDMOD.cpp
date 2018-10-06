#include<bits/stdc++.h>
using namespace std;


long long  hcf( long long a ,long long b){
	if(a==0)
		return b;
	else
		return hcf(b%a,a);
}

/*long long expo(long long a,long long exp,long long d){
		int p=1;
 long long total=1;
	for(;p<=exp;p++){
		total*=a;
 
		if(total>=d){
			total=expo((total%d),exp/p,d);
            total%=d;
            total*=expo(a,exp%p,d);
            total%=d;
            break;
		}
	}
 
	return total%d;
} 
*/
/*long long expo(long long x,long long n,long long M)
{
    long long result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=(result%M * x%M)%M;
        x=(x%M * x%M)%M;
        n=n/2;
    }
    return result;
}*/

long long expo(long long  x,long long  n,long long  M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return expo((x%M*x%M)%M,n/2,M)%M;
    else                             //n is odd
        return (x*expo((x%M * x%M)%M,(n-1)/2,M))%M;

}

int main(){
	int t; 
    long long a,b,d,cn,an=1,bn=1,n;
	long long ans;
	int m=1000000007;

	cin>>t;
	while(t--){
		an=1; bn=1;
		cin>>a>>b>>n;
		d=abs(a-b);

		//cout<<a<<" "<<b<<endl;
        if(d!=0){
		    an=expo(a,n,d);
		    bn=expo(b,n,d);
		cn=(an%d + bn%d)%d;
		//cout<<cn<<endl;

		ans= hcf(cn,d);

	}

	if(d==0){
		an=expo(a,n,m);
		bn=expo(b,n,m);
		cn=(an%m + bn%m)%m;
		ans=cn;
	}
         
         cout<<ans%m<<endl;

	}
}