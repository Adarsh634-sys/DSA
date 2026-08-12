# include <iostream>
using namespace std; 
int main(){
    int arr[4]={2,5,6,7};
    int key;

    cout<<"enter the searching key"<<endl;
    cin>>key;

    bool found;

    for(int i=0; i<4; i++){
        if(arr[i]== key){
            found = true;
            

        }
    }
    if(found){
        cout<<"key is present"<<endl;

    }
    else{
        cout<<"key is not found "<<endl;
    }
    return 0;
}