#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[]={1,2,3,45,56,34,65,21};
    int size = 8;
    int mini= INT_MAX; 
    for (int i=0;i<size ;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    cout << "minimum number is :"<< mini << endl;

    return 0;
}