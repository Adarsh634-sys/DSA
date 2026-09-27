# include<iostream>
using namespace std;
int main(){
    int arr[5]={5,7,8,9,3};
    int largest=arr[0];
    int n= 5;
    for( int i =1; i<n; i++){
        if(largest< arr[i]){

            largest = arr[i];
        }
    }
    cout<<"largest : "<<largest;
    return 0;

}