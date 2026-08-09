// using function in linear search 

/*# include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    
    int key;
    int arr[10]={2,4,5,7,9,3,4,0,1,6};

    cout<<"enter the  element to search"<<endl;
    cin>>key;

    bool found= search(arr,10, key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not found"<<endl;
    }
    return 0;

}*/

// using without function 

# include <iostream>
using namespace std; 
int main(){
    int key;
    int arr[5]={2,8,7,5,4};
    bool found =false;
    cout<<"enter the element to search"<<endl;
    cin>>key;
    for(int i=0; i<5; i++){
        if(arr[i] == key){
            found=true;
            break;
        }
        
    }

    if(found){
        cout<<"key is present "<<endl;

    }else{
        cout<<"key is absent"<<endl;
    }
    
}