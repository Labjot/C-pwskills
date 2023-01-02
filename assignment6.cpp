#include<iostream>
using namespace std;

//Write a function to print the square of first 5 natural numbers
int square(int num){
    int sq=num*num;
    return sq;

}

//Write a function to print the area and circumference of circle
float area_of_circle(float radius){
    float area=(3.14 * (radius*radius));
    return area;
    
}

float circum_of_circle(float radius){
    float circum=(2*3.14*radius);
    return circum;
}

//Write a program to check whether a person is eligible to vote or not
int voting_eligibility(int age){
    if (age>18){
        cout<<"You are eligible for voting."<<endl;
    }
    else {
        cout<<"You are not eligible for voting."<<endl;
    }
}

//Given two numbers num and num2, write a program using functions to print all the odd numbers between them
int odd_printer(int num){
    if (num%2!=0){
        cout<<num<<" ";
    }
}

//Given two numbers a and b,write a program using functions to print the prime numbers between them
int prime_printer(int a){

    bool is_prime=true;

    if (a==0||a==1){
        is_prime=false;

    }
    for(int i=2;i<a;i++){
        if (a%i==0){
            is_prime=false;
            break;
        }
        
    }
    if (is_prime){
        cout<<a<<" ";
    }
   

}



int main(){

    //ques 1
    for (int i=1;i<=5;i++){
        cout<<square(i)<<" ";
        
    }

    cout<<endl;


    //ques 2
    float radius;
    cout<<"Enter the radius: ";
    cin>>radius;

    cout<<"The area of the circle is : "<<area_of_circle(radius)<<" sq unit"<<endl;
    cout<<"The circumference of the circle is : "<<circum_of_circle(radius)<<" unit"<<endl;

    //ques 3
    int age;
    cout<<"Enter age: ";
    cin>>age;

    voting_eligibility(age);

    //ques 4
    int num;
    cout<<"Enter the starting point: ";
    cin>>num;
    int num2;
    cout<<"Enter the ending point: ";
    cin>>num2;

    cout<<"The list of odd numbers between "<<num<<" and "<<num2<<" is : ";

    for (num;num<=num2;num++){
        odd_printer(num);
        

    }
    
    cout<<endl;

    //ques 5
    int a,b;
    cout<<"Enter the initial point: ";
    cin>>a;
    cout<<"Enter the final point: ";
    cin>>b;

    for (a;a<=b;a++){
        prime_printer(a);
    }



}
