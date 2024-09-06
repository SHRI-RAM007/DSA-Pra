<<<<<<< HEAD
#include <iostream>
#include "assert.h"
using namespace std;
int main (){
    int n;
    cin>>n;
    assert(n<=9);
    for(int i=0;i<n;i++){
        int start_num_index = 8-i;
        int num=i+1;
        int count_num = num;
        for(int j=0;j<17;j++){
            if(j==start_num_index && count_num>0){
                cout << num;
                start_num_index+=2;
                count_num--;
            }
            else{
            cout <<"*";
            }

        }
        cout << endl;
    }
=======
#include <iostream>
#include "assert.h"
using namespace std;
int main (){
    int n;
    cin>>n;
    assert(n<=9);
    for(int i=0;i<n;i++){
        int start_num_index = 8-i;
        int num=i+1;
        int count_num = num;
        for(int j=0;j<17;j++){
            if(j==start_num_index && count_num>0){
                cout << num;
                start_num_index+=2;
                count_num--;
            }
            else{
            cout <<"*";
            }

        }
        cout << endl;
    }
>>>>>>> 8b04f22c3b1c0a4f48516ead13ae282b44529225
}