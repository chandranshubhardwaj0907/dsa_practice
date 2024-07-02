#include<iostream>
using namespace std;
int main(){
    int arr[] ={4,3,5,2,1};
    int n =5;
    int start = 0;
    int end = n-1;
    for(start=0;start<n;start++){
        for( end = start;end<n;end++){
            for(int i=start ;i<=end;i++){
cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
