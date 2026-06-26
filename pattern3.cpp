/*
123
456
789  

 print the pattern
*/

# include <iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"enter the number"<<endl;
    cin >>n;

    int row= 1;
    int count =1 ;
    while(row<=n)
    {
        
        int coln=1;
        while(coln<=n) {
             cout<< count << " ";
        
           count = count+1; 
           
            
           coln=  coln+1;
            
        }
        cout<<endl;
   row= row+1;
    }

}