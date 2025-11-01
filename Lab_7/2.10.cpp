#include <iostream>
using namespace std;

int main() {
    int n; 
    
    cout<<"Enter the number of the square:"<<endl;
    cin>>n;
   
    
    if(n<=1){
        
     cout<<"Entered number is too small! Try entering a height againe"<<endl;
     cin>>n;
        
    }
    
    cout <<'+'; 
    for(int i = 0; i <n; i++ ){
        cout <<'-';
        }
      cout<< '+' <<endl; 
      
    for(int i = 0; i <n; i++ ){
        cout <<'|';
        
    for(int j = 0; j <n; j++ )
        cout <<' ';
        cout<< '|' <<endl;
        }
        
        cout <<'+';
    for(int i = 0; i <n; i++ ){
        cout <<'-';       
        }
        cout<< '+' <<endl;
        return 0;
    }
//60