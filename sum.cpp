# include<iostream>
using namespace std; 
int main(){
    int arr[4]={8,9,7,6,};
    int n=4;
    int sum=0;
    for(int i=0;  i<n; i++){
        sum = sum+ arr[i];


    }
    cout<<"sum: " <<sum;
    return 0;

}