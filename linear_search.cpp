//Search an Element Using Linear Search
# include<iostream>
using namespace std; 
int main(){
    int arr[]={5,9,8,3,20};
    int n = 5;
    int target =20;
    bool found;
    for(int i =0; i<n; i++){
        if(arr[i]== target){
            cout<<"yes the elemnt is found :"<<arr[i];
            found= true;
            break;
        }
    }
    if(!found){
        cout<<"element not found";
    }

    return 0;
}