#include<iostream>
#include<climits> 
using namespace std;

int main() {
    int arr[] = {4, 3, 5, 2, 1};
    int n = 5;
    int maxsum = INT_MIN; 
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum += arr[i];
        maxsum = max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout << maxsum << endl;
    return 0;
}
T.C -> O(N)