#include <iostream>
using namespace std;
int fact(int n);


int main(){
int number;
cout << "Enter a number: " << endl;
cin >> number;
cout << "The factorial of " << number << " is " << fact(number) << endl;
return 0;
}


int fact(int n){
if(n == 0){
return 1;
}
if(n > 0){
n *= fact(n - 1);
}
return n;
}
