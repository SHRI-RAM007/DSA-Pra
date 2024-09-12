#include <iostream>
using namespace std;
int main(){
    // int arr[5] = {1,3,5,7,9};
    // cout<< "value of array is :"<< endl;
    // for(int i=0;i<5;i++){
    //     cout<<2*arr[i] << " ";
    // }
    int arr[500];
    int n;
    cout << "how many numbers you wants to add in array"<< endl;
    cin>> n;
    cout <<"enter the numbers :"<< endl;
    for (int i = 0;i<n;i++){
        cin>> arr[i];
    }
    cout<<"singles :"<<endl;
    for (int i=0;i<n;i++){
        cout <<2*arr[i] <<" "; 
    }
    return 0;
}