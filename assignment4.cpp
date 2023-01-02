#include <iostream>
using namespace std;
int main(){
    //Write a program to calculate the factorial of a number
    int num1;
    cout<<"Enter the number: ";
    cin>>num1;

    int factorial=1;

    for (int i=1;i<=num1;i++){
        factorial=factorial*i;
    }
    cout<<"The factorial of given number is : "<<factorial<<endl;

    //Write a program to print al Armstrong numbers between 1 to 500
    for (int i=1;i<=500;i++){
        int armstrong=0;
        int number=i;
        while (number>0){
            int lastdigit;
            lastdigit=number%10;
            armstrong=armstrong + (lastdigit*lastdigit*lastdigit);
            number=number/10;
        }
        if (armstrong==i){
            cout<<i<<endl;
        }
    }

    //Write a program to find the sum of n natural numbers
    int n;
    int sum=0;
    cout<<"Enter n: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        sum+=i;

    }
    cout<<"The sum of given number is : "<<sum<<endl;

    //Write a program to reverse a given number
    int num3;
    cout<<"Enter the number: ";
    cin>>num3;

    int reverse=0;
    while (num3>0){
        int lastdigit;
        lastdigit=num3%10;
        reverse=(reverse*10)+lastdigit;
        num3=num3/10;
    }

    cout<<"The reverse of given number is : "<<reverse<<endl;

    
    

    //Write a program to print the X pattern
    int rows = 5;
    for (int i=1;i<=rows;i++){
        for (int j=1;j<=rows;j++){
            if ((i==j)||((i+j)==rows+1)){
                cout<<"*";
            } else {
                cout<<" ";
            }

        }
        cout<<endl;

    }

    //Write a program to print + pattern

    int row=5;
    for (int i=1;i<=row;i++){
        for (int j=1;j<=row;j++){
            if (i==3||j==3){
                cout<<" *";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    

    }

    //Write a program to print the rectangle out of *

    int rowR,colR;
    cout<<"Enter the number of rows: ";
    cin>>rowR;
    cout<<"Enter the number of columns: ";
    cin>>colR;

    for (int i=1;i<=rowR;i++){
        for (int j=1;j<=colR;j++){
            cout<<"*";
        }
        cout<<endl;
    }





}

