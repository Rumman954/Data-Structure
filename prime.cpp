#include <iostream>
using namespace std;
int main ()
{
int a = 100;int b = 2;
int c = 25;int d = 4;
int result;
result = a - b; // subtraction
cout<<"a - b = "<< result<<endl;
result = b * c; // multiplication
cout<<"b * c =  "<< result<<endl;;
result = a / c; // division
cout<<"a / c =  "<< result<<endl;
result = a + b * c; // precedence
cout<<"a + b * c = "<<result<<endl;
return 0;
}
