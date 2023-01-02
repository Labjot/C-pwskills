#include<iostream>
using namespace std;
int main()
{
 //Take 2 integer values in two variables x and y and print their product
 int x,y,product;
 cout<<"Enter x : "<<endl;
 cin>>x;
 cout<<"Enter y : "<<endl;
 cin>>y;
 product = x*y;
 cout<<"The product of x and y is : "<<product<<endl;


 //Write a C++ program to take length and breath of a rectange and print its area
 int length,breath,area;
 cout<<"Enter length : "<<endl;
 cin>>length;
 cout<<"Enter breadth : "<<endl;
 cin>>breath;
 area = length*breath;
 cout<<"The area of rectangle will be : "<<area<<" sq. unit"<<endl;
 
 //Write a program to calculate the cube of a number
 int cubenum,cube;
 cout<<"Enter the number : "<<endl;
 cin>>cubenum;
 cube = cubenum*cubenum*cubenum;
 cout<<"The cube of entered number is : "<<cube<<endl;
  

 //Write a C++ program to find size of basic data types
   cout<<sizeof(char)<<" bytes"<<endl;
   cout<<sizeof(short)<<" bytes"<<endl;
   cout<<sizeof(int)<<" bytes"<<endl;
   cout<<sizeof(long)<<" bytes"<<endl;
   cout<<sizeof(long double)<<" bytes"<<endl;

 //Write a program to swap two numbers with the help of a third variable
 int a,b,c;
 cout<<"Enter a : "<<endl;
 cin>>a;
 cout<<"Enter b : "<<endl;
 cin>>b;

 c=a;
 a=b;
 b=c;
 cout<<"The swapped value of a : "<<a<<endl;
 cout<<"The swapped value of b : "<<b<<endl;

 //Print the ASCII value of character'U'
 cout<<"The ASCII value of u is "<<(int)'U'<<endl;
 return 0;

}
