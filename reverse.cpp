/*# include<iostream>
using namespace std;
int main(){

    int arr[3]{2,4,6};
     int start=0;
     int end= 3-1;
     while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;


     }
     for(int i=0; i<3; i++){

        cout<<arr[i]<<" ";
     }
     cout<<endl;
     return 0;

}*/
# include <iostream>
using namespace std;
void reverse(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

void printarray(int arr[], int n){
    for(int i=0; i<n; i++ ){

        cout<<arr[i]<< " ";
    }
    
}

int main(){
    int arr[4]={2,4,5,6};

    reverse(arr, 4);
    printarray(arr, 4);
    
    return 0;

}