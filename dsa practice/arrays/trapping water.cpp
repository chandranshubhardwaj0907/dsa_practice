#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 2, 0, 6, 3, 2, 5};
    int n = 7;
    int left[2000];
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i - 1]);
    }
    int right[2000];
    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i > 0; i--)// take care
    {
        right[i] = max(right[i + 1], arr[i + 1]);// take care
    }
    int currwater=0;
    int watertrapped = 0;
    for(int i =0;i<n;i++){
        currwater = min(left[i],right[i])-arr[i];
        if(currwater>0){
             watertrapped += currwater;
        }
    }
    cout<< watertrapped;
    return 0;
}