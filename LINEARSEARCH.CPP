# include<iostream>
using namespace std;
int main(){
    int arr[5]={2,5,7,8,9};
    int x=8;
    int n=5;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"index is : "<<i;
        }

    }
    return 0;
}