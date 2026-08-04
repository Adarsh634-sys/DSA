// write a program to calculate the sum of array  elemet



//---usinng without function ----//
/*# include <iostream>
using namespace std; 
int main(){
    int size;
    int num[1000];
    int sum=0;
    cout<<"enter the size of array "<<endl;
    cin>>size;
    for(int i=0; i<size; i++){
        cout<<"enter the value of array"<<endl;
        cin>>num[i];

        sum= sum+num[i];
    }

    cout<<"sum of array is :"<< sum<<endl;
    return 0;
}
*/

//------- using function---------// 

# include<iostream>
using namespace std; 

int getSum(int num[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum= sum+num[i];
    }

    return sum;


}
int main(){
    int size;
    int num[1000];
    cout<<"enter the size of array"<<endl;
    cin>>size;

    for(int i=0; i<size; i++){
        cout<<"enter the value f array element array"<<endl;
        cin>>num[i];
    }
    cout<<"the sum of arryay is:" <<getSum(num, size);

    return 0;
}
