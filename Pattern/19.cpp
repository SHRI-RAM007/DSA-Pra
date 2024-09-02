#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for (int i =0;i<n;i++){
    int start = i+1;
    for(int j=0;j<i+1;j++){
        cout<<i+j+1<<" ";


        // cout<<start <<" ";
        // start = start+1;
        // isse bhi aa skta hai
        
    }
    cout<<endl; 
   }

}