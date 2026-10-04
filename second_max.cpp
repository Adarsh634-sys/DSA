# include<iostream>
using namespace std;
int main(){
    int arr[5]= {1,2,3,4,5};
    int n =5;
    int ans=arr[0];
    for(int i=0; i<n;  i++){
        if(arr[i]>ans){
            ans= arr[i];
        }
    }
    int second= -1;
    for(int i=0; i<n ; i++ ){
        if(arr[i]!=ans){
            second= max(second, arr[i]);

        }
        
    }
    cout<<"second maximum= "<< second;
return 0;
}