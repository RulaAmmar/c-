#include <iostream>

using namespace std;

int main()
{
int n,count=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
 cin>>arr[i];
}
for(int i=0;i<n-1;i++){
    for(int j=i;j<n-1;j++){
        if(arr[j]<arr[j+1]){
            count++;
        }
    }
}
cout<<count+n;
}

