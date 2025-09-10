#include <iostream>
using namespace std;

int main(){
    float number1, number2, number3;
    cout<<"Which is the largest number?"<<endl;
    cout<<" Insert number 1 =  test1"; cin>>number1;
    cout<<" Insert number 2 = "; cin>>number2;
    cout<<" Insert number 3 = "; cin>>number3;

    float largestNumber, smallestNumber;

    if(number1 !<= number2 && number1 !<= number3){
        largestNumber = number1;
    }

    if(number1 == number2 && number1 == number3){
        cout<<"All numbers are equal. With a maximum and minimum of "<<number1;
    } else {
        cout<<"The largest number is "<<largestNumber<<endl;
        cout<<"The smallest number is "<<smallestNumber<<endl;
    }
    
    return 0;
}