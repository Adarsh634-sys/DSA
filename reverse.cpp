/*# include<iostream>
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
void PrintArray(int arr[], int n){
        for(int i=0; i<n; i++){
            cout<<arr[i];
        }
        cout<<endl;
    }
int main(){
    int arr[3]={3,2,1};
    int brr[4]={9,8,7,6};

    reverse(arr, 3);
    reverse(brr,4);

    PrintArray(arr, 3);
    PrintArray(brr, 4);



}*/

# include <iostream>
using namespace std; 
int main(){
    int arr[3]={3,2,1};
    int brr[4]={10,9,8,7};

    // reverse arr

    int start=0;
    int end= 3-1;

    while(start<= end){
        swap(arr[start], arr[end]);
        start++;
        end--;

    }

    //reverse brr

    start= 0;
    end= 4-1;

    while(start<=end){
        swap(brr[start], brr[end]);
        start++;
        end--;
    }

    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
   }
   cout<<endl;

   for(int i=0; i<4; i++){
    cout<<brr[i]<<" ";
   }
   cout<<endl;

   return 0;

}