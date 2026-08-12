# include <iostream>
using namespace std;
int main(){
    int arr[3]={2,4,6};
    int min = arr[0];
    for(int i=0; i<3;i++){
        if(arr[i]<min){
            min= arr[i];

        }
    }

    cout<<"minimum element is :"<<min<<endl;
    return 0;

}
