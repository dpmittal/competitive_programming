#include<bits/stdc++.h>
#define ll long long
using namespace std;
string intToRoman(int num)
{
     string m[] = {"", "M", "MM", "MMM"};
     string c[] = {"", "C", "CC", "CCC", "CD", "D",
                        "DC", "DCC", "DCCC", "CM"};
     string x[] = {"", "X", "XX", "XXX", "XL", "L",
                        "LX", "LXX", "LXXX", "XC"};
     string i[] = {"", "I", "II", "III", "IV", "V",
                        "VI", "VII", "VIII", "IX"};

     string thousands = m[num/1000];
     string hundereds = c[(num%1000)/100];
     string tens =  x[(num%100)/10];
     string ones = i[num%10];

     string ans = thousands + hundereds + tens + ones;

     return ans;
}
int main(){
  int n;
  cin>>n;
  ll s = 0;
  while(n<=3999){
    string ans = intToRoman(n);
    char ma = 'A';
    for(int i=0;i<ans.size();i++){
      if(ma<ans[i])
        ma = ans[i];
    }
    int m = ((int)ma - (int)'A')+11;
    int l = ans.size();
    s=  0;
    for(int i=0;i<l;i++){
      s+= ((int)ans[i]-(int)'A'+10)*(powl(m, l-i-1));
    }
    if(s>3999)
      break;
    n = s;
  }
  cout<<s<<endl;
  return 0;
}
