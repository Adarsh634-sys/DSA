# include<iostream>
using namespace std; 
int main(){
    int n=5;
    double avg;
    int sum;
    int arr[5]={3,4,9,5,7};
    for(int i= 0; i<n; i++){
        sum= sum+arr[i];

    }

    avg= sum /n;

    cout<<"average: " <<avg;
    return 0;
}