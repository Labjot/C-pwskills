#include <iostream>
using namespace std;
int main(){
    //Write a program which takes the values of length and breadth from user and checks if it is a square or not

    int length,breadth;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;

    if (length==breadth){
        cout<<"It is a square."<<endl;
    } else {
        cout<<"It is a rectangle."<<endl;
    }
    
    //Write a program to print absolute value of a number entered by the user
    int num;
    cout<<"Enter number: ";
    cin>>num;

    if (num<0){
        cout<<"The absolute value is : "<<(-1*num)<<endl;
    } else if (num>0) {
        cout<<"The absolute value is : "<<num<<endl;
    } else if (num==0) {
        cout<<"The absolute value is : "<<num<<endl;
    }

    //Write a program to take input from the user for Cost price and selling price and calculate profit or loss.

    int costPrice,sellingPrice;
    cout<<"Enter cost price: ";
    cin>>costPrice;
    cout<<"Enter selling price: ";
    cin>>sellingPrice;

    int profit,loss;
    profit = sellingPrice-costPrice;
    loss = costPrice-sellingPrice;

    if (profit>loss){
        cout<<"You have earned a profit of Rs."<<profit<<endl;
    } else if (loss>profit){
        cout<<"You sold it under a loss of Rs."<<loss<<endl;
    } else if (profit==loss) {
        cout<<"You sold the item at the same price you bought."<<endl;
    }

    //Write a program to print postive number entered by the user, if user enters a negative number ,it is skipped 
    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;

    if (number>=0){
        cout<<"Printing the number you entered.................."<<endl;
        cout<<number<<endl;

    } else if (number<0){
        cout<<"Sorry! You have entered a negative number and we have to skip it."<<endl;
    }

    //Create a calculator using switch statament to perform addition,subration, multiplication, division

    char operators;
    float num1,num2;
    cout<<"Enter the operation (+,-,*,/):  ";
    cin>>operators;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    switch (operators){
        case '+':
            cout<<"The addition these two numbers is : "<<(num1+num2)<<endl;
            break;
        
        case '-':{
            cout<<"The subraction of these two numbers is : "<<(num1-num2)<<endl;
            break;
        }
        case '*':
            cout<<"The multiplication of these two numbers is : "<<(num1*num2)<<endl;
            break;
        
        case '/':
            cout<<"The division of these two numbers is : "<<(num1/num2)<<endl;
            break;
        
        default:
            cout<<"The operator you entered is not supported.";
        

    }

    //Write a program to calculate marks to grades.
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;

    if (marks>=90){
        cout<<"Your Grade is A+."<<endl;
    } else if (marks>=80) {
        cout<<"Your Grade is A."<<endl;
    } else if (marks>=70) {
        cout<<"Your Grade is B+."<<endl;
    } else if (marks>=60) {
        cout<<"Your Grade is B."<<endl;
    } else if (marks>=50) {
        cout<<"Your Grade is C."<<endl;
    } else if (marks>=40) {
        cout<<"Your Grade is D."<<endl;
    } else if (marks>=30) {
        cout<<"Your Grade is E."<<endl;
    } else if (marks>=0) {
        cout<<"Your Grade is F."<<endl;
    }

    








}
