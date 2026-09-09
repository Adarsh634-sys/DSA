# include <iostream>
using namespace std;
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={3,4,5,6,7,8};

    int n1=5;
    int n2=6;

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<endl;
            }
        }
    }
    return 0;
}