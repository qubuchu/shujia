#include<iostream>
using namespace std;
int maxsumofSubarray(int *arr, int arrLen) ;
int main()
{
    int a[7]={1,-1,3,5,-2,6,-1};
    int arrLen=7;
    int i=0;
    /*while(i<arrLen)
    {
        cin >> a[i];
        i++;
    }*/
    cout << maxsumofSubarray(a,arrLen);
}


int maxsumofSubarray(int* arr, int arrLen ) {
    // write code here
    int max=0,Max=0;
    int i;
    for(i=0;i<arrLen;i++)
    {
        max += arr[i];
        if(max<0)
        max=0;
        if(max>Max)
        Max=max;
    }
    return Max;
}