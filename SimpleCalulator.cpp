#include<iostream>
using namespace std;
int main(){
    float number1;
    float number2;
    float result;
    char operators;
    cout<<"Enter the First Number:";
    cin>>number1;
    cout<<"Enter the Operator from(+ - / *)";
    cin>>operators;8
    cout<<"Enter the Second Number: ";
    cin>>number2;
    switch(operators){
        case '+':
        result=number1+number2;
        cout<<"="<<result<<endl;
        break;
         case '-':
        result=number1-number2;
        cout<<"="<<result<<endl;
        break;
         case '/':
         if(number2!=0){
        result=number1/number2;
        cout<<"="<<result<<endl;
        break;}
        else{
            cout<<"undefined";
        }
         case '*':
        result=number1*number2;
        cout<<"="<<result<<endl;
        break;
    };
    return 0;
}