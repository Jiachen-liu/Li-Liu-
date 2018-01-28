//出现次数最多的数
#include <iostream>
#include <algorithm>
using namespace std;
int n;
int a[10010];
int b[10010];
int main() {
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  for(int i=1;i<=n;i++){
    int index=0;
    for(int j=1;j<i;j++){
      if(a[j]==a[i]){
        index=max(index,b[j]);
      }else{
        b[i]=0;
      }
    }
    b[i]=index+1;
  }
  //out
  int ans=0;
  for(int i=1;i<=n;i++){
    if(b[i]>ans){
      ans=b[i];
    }
  }
  int index1=1000;
  for(int i=1;i<=n;i++){
    if(b[i]==ans){
      index1=min(index1,a[i]);
    }
  }
  cout<<index1<<endl;
  return 0;
}
