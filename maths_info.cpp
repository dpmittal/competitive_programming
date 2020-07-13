#include<bits/stdc++.h>
#define ll long long
using namespace std;
int minNum(int threshold, vector<int> happy){
  int n = happy.size();
  int flag = 1;
  for(int i=0;i<n;i++){
    if(threshold<=(happy[i]-happy[0])){
      flag = 0;
      break;
    }
  }
  if(flag)
    return n;
  else{
    int s = 2 + (n-2)/2;
    return s;
  }
}
int main(){
  int t, n;
  cin>>t>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int flag = 1;
  for(int i=0;i<n;i++){
    if(t<=(arr[i]-arr[0])){
      flag = 0;
      break;
    }
  }
  if(flag)
    cout<<n<<endl;
  else{
    int s = 2 + (n-2)/2;
    cout<<s<<endl;
  }
  return 0;
}
