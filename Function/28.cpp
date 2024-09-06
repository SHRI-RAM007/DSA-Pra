<<<<<<< HEAD
#include<iostream>
using namespace std;

bool checkEven(int n){
    if(n%2 == 0){
        return true ;
    }
    else{
        return false;
    }
}

 int main(){
    int n;
    cin>>n;
    bool isEven = checkEven(n);

    if (isEven){
        cout << n << " is Even number.\n";
    }
    else{
        cout << n<< " is odd number.\n";
    }
=======
#include<iostream>
using namespace std;

bool checkEven(int n){
    if(n%2 == 0){
        return true ;
    }
    else{
        return false;
    }
}

 int main(){
    int n;
    cin>>n;
    bool isEven = checkEven(n);

    if (isEven){
        cout << n << " is Even number.\n";
    }
    else{
        cout << n<< " is odd number.\n";
    }
>>>>>>> ae50e47f090c8af6da80d8a8ddc419fd1a1ea2db
 }