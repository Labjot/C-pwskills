#include<iostream>
using namespace std;
int main(){
    //Write a program to check whether two numbers are equal or not

    int number1;
    cout<<"Enter first number: "<<endl;
    cin>>number1;
    int number2;
    cout<<"Enter second number: "<<endl;
    cin>>number2;
    cout<<(number1==number2)<<endl;  //0 for false 1 for true


    //Write a program to take the values of two variabls a and b from the keyboard and then check if both the conditioins a<50 and a<b are true

    int a;
    cout<<"Enter a: "<<endl;
    cin>>a;

    int b;
    cout<<"Enter b: "<<endl;
    cin>>b;

    cout<<(a<50&&a<b)<<endl;

    //There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grade A i f17 boys made up 80% of the student that received grades A

    int total,boys,girls;
    boys=17;
    total=(45*80)/100;
    girls=total-boys;
    cout<<"Number of girls getting grade A : "<<girls<<endl;

    //Design a calculator to perform basic arithmetic operation(+-/*%)

    float numb1,numb2;
    cout<<"Enter first number : ";
    cin>>numb1;
    cout<<"Enter 2nd number : ";
    cin>>numb2;
    cout<<"The sum of these numbers is : "<<numb1+numb2<<endl;
    cout<<"The subtraction of these numbers is : "<<numb1-numb2<<endl;
    cout<<"The multiplication of these two numbers is : "<<numb1*numb2<<endl;
    cout<<"The division of these two numbers is : "<<numb1/numb2<<endl;


    //Write a program to calculate the sum of 3 digit number

    int n,first,second,third,sum;
    n=456;

    first=n/100;
    n=456%100;
    second=n/10;
    third=n%10;
    sum = first + second + third;
    cout<<"The sum of digits of this number is : "<<sum<<endl;

    











  


}
