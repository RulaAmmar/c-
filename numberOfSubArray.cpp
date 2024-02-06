#include <iostream>

using namespace std;

int main()
{
//number subaArrsy=n*(n+1)/2
//sizeof()=number of byte
int arr[]={1,2,3,4};
int numberOfSubArray;
int numberOfArray=sizeof(arr)/sizeof(arr[0]);
numberOfSubArray=numberOfArray*(numberOfArray+1)/2;
cout<<"numberOfSubArray = "<<numberOfSubArray;
    return 0;
}
