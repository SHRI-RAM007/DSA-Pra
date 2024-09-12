#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size = 8;

    int key = 9;
    bool flag = 0;

    for (int i=0;i<size;i++){
        if (arr[i]==key){
            flag = 1;
        }
    }
    if (flag){
        cout << "present"<< endl;

    }
    else{
        cout << " not present"<< endl;
    }

    return 0;
}