# include<iostream> 
using namespace std;
int main(){
    int arr[5]={3,3,4,5,5};
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){

            if(arr[i]==arr[j]){
                cout<< "duplicate:"<< arr[i] <<endl;
            }
        }
    }
    return 0;
}