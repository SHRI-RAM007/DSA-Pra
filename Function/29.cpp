<<<<<<< HEAD
#include <iostream> 
using namespace std;
int fact (int n){
    int fact = 1; 
    for (int i = 1; i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    int ans = fact(n);
    cout <<"factorial of "<< n<< " is "<< ans << endl;
=======
#include <iostream> 
using namespace std;
int fact (int n){
    int fact = 1; 
    for (int i = 1; i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    int ans = fact(n);
    cout <<"factorial of "<< n<< " is "<< ans << endl;
>>>>>>> ae50e47f090c8af6da80d8a8ddc419fd1a1ea2db
} 