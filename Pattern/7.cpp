#include<iostream>
using namespace std;
int main(){
    int n, m;
       cout << "enter no. : "<< endl;
    cin>>n;
    cin>>m;
 
    for(int i = 0  ; i<n ; i++){
        if(i==0 || i==n-1){
            for(int j=0; j<m;j++ ){
                cout<< "* ";
            }
        }
        else{
            cout<< "* ";
            for(int i=0;i<m-2 ;i++){
                cout<<"  ";
            }
            cout<< "* ";
        }
        cout<<endl;
    }
}