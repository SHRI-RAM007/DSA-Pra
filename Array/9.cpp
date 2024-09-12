#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[]={1,2,3,45,56,34,65,21};
    int size = 8;
    int maxi= INT_MIN; 
    for (int i=0;i<size ;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    cout << "maximum number is :"<< maxi << endl;

    return 0;
}