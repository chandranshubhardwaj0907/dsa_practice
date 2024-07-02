// usng extra space
#include<iostream>
using namespaces std;
int main(){
    int arr[] = {5,3,6,2,1};
    int n = 5;
    int copyarr[n];
    for(int i =0;i<n;i++){
        int j = n-i-1;
        copyarr[i] = arr[j];
    }
    for(int i=0;i<n;i++){
        arr[i] = copyarr[i];
    }
    for(int i =0;i<n;i++){
        cout << arr[i];
    }
    return 0;
}
// without using extra space
#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[] = {5, 3, 6, 2, 1};
    int n = 5;
    int start = 0;
    int end = n - 1;
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
