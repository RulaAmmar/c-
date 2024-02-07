#include <iostream>

using namespace std;

int main(){
int arr[]={5,4,-1,7,8};
int sum;
int max=5;
for(int i=0;i<5;i++){
     sum=0;
    for(int j=i;j<5;j++){
      sum=sum+arr[j];
      if(sum>max){
        max=sum;
      }
    }
}
cout<<max;
}

