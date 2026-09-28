# include<iostream>
using namespace std;
int main(){
    int arr[5]={3,2,8,9,6};
    int n=5;
    int even=0;
    int odd=0;
    for(int i=0; i<n; i++){
        if(arr[i]% 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"even number: "<<even<<endl;
    cout<<"oddn number : "<<odd<<endl;
    return 0;
}