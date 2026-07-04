# include <iostream>
# include<math.h>
using namespace std;
 int main(){
    int n ;
    int ans=0;
    int i = 0;
    int place=1;
    cout<<"enter the number "<<endl;
    cin>>n;
  

    while (n!=0){
        int bit = n & 1;
        ans= bit *place+ ans;

        n= n >> 1;

        place= place*10;
    }
    cout<<ans<<endl;
 }