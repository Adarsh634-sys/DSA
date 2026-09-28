#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    int start = 0;
    int end = n - 1;

    while (start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
        
    }
    for(int i=0; i<n; i++){
        cout<<" "<< arr[i];
    }
    return 0;

}