#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int flag=0;

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }


    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}

