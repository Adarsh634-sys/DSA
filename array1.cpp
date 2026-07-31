# include<iostream>
using namespace std; 
void printArrray(int arr[], int size){
    for(int i=0;i<size; i++){
        cout<<arr[i];

    }
    cout<<endl;
    cout<<"printing done"<<endl;



}

int main(){

    int first[10]={2,7}; 
    printArrray(first, 10);

    int second[15]={3,4};
    printArrray(second,15);

    char ch[5] ={'a','d','a','r','s'};
    cout<<ch[3]<<endl;
     cout<<"printing  the array "<<endl;
     for(int i=0; i<5; i++){
        cout<<ch[i]<<" ";
     }

   


}