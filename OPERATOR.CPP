// print couting using for loop

// method :-1

/*#include <iostream> 
using namespace std ;
int main(){
    int n;
    cin>>n;

    for(int i =0; i<=n ; i++){
        cout<<i<<endl;
    }
}*/


// method:-2

# include <iostream>
using namespace std ;
int main(){
    int n;

    cout<< "enter the number"<<endl;
    cin>>n;

    int i=1;

    for (;  ; ){
        if(i<= n){
            cout<<i<<endl;
        }else{
            break;
        }
        i++;
    }
}