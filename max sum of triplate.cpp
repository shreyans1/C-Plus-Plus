#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int n;
  cin >> n;
int arr[n];
int count = 0;
int max = -9999999;
if(n>2){
for(int i=0;i<n;i++)
{
cin >> arr[i];
}


for(int j = 0 ; j<n-2;j++){
  if(arr[j]+arr[j+1]+arr[j+2]>max){
    max = arr[j]+arr[j+1]+arr[j+2];
  }
}
}
cout << "Max is "<< max<< endl;
}
