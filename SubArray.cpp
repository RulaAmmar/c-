#include <iostream>

using namespace std;

int main()
{
//number subaArrsy=n*(n+1)/2
//sizeof()=number of byte
int arr[]={1,2,3,4};
int numberOfSubArray;
int numberOfArray=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<=3;i++){
 for(int j=0;j<=i;j++){
     cout<<arr[j]<<" ";
    }
cout<<endl;
}
    return 0;
}
