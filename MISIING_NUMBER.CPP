# include<iostream>
using namespace std;
int main(){
    int arr[5]={1,3,4,5,6};
    int sum=0;
    int n=6;
    //sum all element
    for(int i=0; i<n; i++){
        sum = sum+arr[i];

    }

    //sum of n number

    int ans = n* (n+1) /2;
    cout<<ans - sum;
    return 0;


}