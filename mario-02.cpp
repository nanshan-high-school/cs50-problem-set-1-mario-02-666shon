#include <iostream>
using namespace std;

int main() {
int h ;
cout<<"輸入你要的高度";
cin>>h;
if(h >= 1 && h <= 8)
for(int l=1;l < h+1 ;l++){
  for (int j=0;j <h-l;j++){
  cout<<" ";
  }
  for(int i=0;i<l;i++){
  cout<<"#";
  
  }
  cout<<" ";
  for(int k=h-l;k<h;k++){
    cout<<"#";
  }
cout<<"\n";
}
}
