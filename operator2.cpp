// print the sum  1 to 10

# include <iostream> 
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter the number "<<endl;
    cin>>n;

    for ( int i=0; i <=10; i++){
        sum= sum+i;

        cout<< sum <<endl;
    }
}