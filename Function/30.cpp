 #include <iostream>
 using namespace std;

 int main(){
     
     int setKthBit(int N,int K)
     {
        int mask = 1   << K;
        int ans = N | mask;
        return ans;
     }
 };