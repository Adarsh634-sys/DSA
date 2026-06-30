//print prime number 

# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<"not prime number";
        }else{
            cout<<" may br prime number"<<endl;
        }
    }
}