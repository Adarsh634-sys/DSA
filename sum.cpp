# include<iostream>
using namespace std;
int main(){
    int arr[3]={4,3,6};
    int sum=0;

    for(int i=0; i<3; i++){
        sum= sum+arr[i];
        
    }
    cout<<"sum off array is: "<<sum<<endl;
    return 0;
}