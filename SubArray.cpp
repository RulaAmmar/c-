#include <iostream>

using namespace std;

int main()
{
//number subaArrsy=n*(n+1)/2
//sizeof()=number of byte
int arr[]={1,2,3,4};
int numberOfSubArray;
int numberOfArray=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<numberOfArray;i++){
 for(int j=i;j<numberOfArray;j++){
     for(int k=i;k<=j;k++){
        cout<<arr[k]<<" ";
     }
     cout<<endl;
    }

}

}

