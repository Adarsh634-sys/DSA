# include<iostream>
using namespace std;
int main(){
    int arr[5]={3,4,7,8,0};

    int n= 5; 
    int smallest = arr[0];

    for(int i=1; i<n; i++){
        if(smallest >  arr[i]){
            smallest = arr[i];
        }
    }

    cout<<"smallest: "<<smallest;
}