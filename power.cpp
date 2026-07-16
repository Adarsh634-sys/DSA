// calculate the power using function


# include<iostream>
# include <math.h>
using namespace std;

int power(int a, int b){
    int ans = 1;

    for (int i=1; i<=b; i++){
        ans= ans * b;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;

    int answer= power(a,b);

    cout<<"answer is :" << answer <<endl;
    return 0;


}

// write a code to calculate the power without using function

/*# include <iostream>
using namespace std;
int main(){

    int a,b;
    cin>>a>>b;

    int ans=1;

    for(int i=1; i<=b; i++){
        ans=ans*a;
    }
    cout<<"answer is :"<<ans<<endl;

        return 0;
}*/

