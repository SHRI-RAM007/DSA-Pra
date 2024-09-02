 #include <iostream>
using namespace std;

void printNumber(int num)
{
    cout << num << endl;
}
    int add(int x,int y);

    int findMax(int num1,int num2,int num3 ){
         if (num1>num2 && num1>num3){
            return num1;
         }
        else if(num2>num1 && num2 >num3){
            return num2;
        } 
        else {
            return num3;
        }
    }
  int main{
        int a,b,c;
    cin >> a >> b >> c ;
    int maximumNumber = findMax(a,b,c);
    cout << maximumNumber <<endl;
    return 0;
   }

 int add(int x,int y){
    int result = x + y;
    return result;

 }