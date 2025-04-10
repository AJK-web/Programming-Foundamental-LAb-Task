// #include<iostream>
// using namespace std;
// int main(){
//     int number1,number2,swapvariable;
//     cout<<"Enter the Value for First Number:";
//     cin>>number1;
//     cout<<"Enter the Value for Second Number:";
//     cin>>number2;
//     swapvariable=number1;
//     number1=number2;
//     number2=swapvariable;
//     cout<<"Number 1:"<<number1<<"Number 2:"<<number2<<endl;
//     return 0;
// }
// 
// #include<iostream>
// using namespace std;
// int main(){
//      int number1=3,number2=2;
//   cout<<"Number1:"<<number1-1<<"Number 2:"<<number2+1;
//   return 0;
// }
// 
#include<iostream>
using namespace std;
int main(){
     int number1,number2,swapvariable;
    cout<<"Enter the Value for First Number:";
    cin>>number1;
     cout<<"Enter the Value for Second Number:";
     cin>>number2;
     number1=number1+number2;
     number2=number1-number2;
     number1=number2-number1;
      cout<<"Number 1:"<<number1<<" Number 2:"<<number2<<endl;
}