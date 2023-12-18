//basic structure of c++ program 
#include<iostream>
// print the first hello world program
using namespace std;
int main(){
	cout<<"hello world";
	return 0;
}
#include<iostream>
//comments and variables 
using namespace std;

int main(){
	//int a =14;
	//int b =15;
	int a=14,b=15;
	float pi=3.14;
	char c ='u';
	bool is_true = true;
    cout<<"The value of a is:- "<<a<<".\nThe value of b is:- "<< b;
    cout<<"\nThe value of pi is:-"<<pi;
    cout<<"\nThe value of c is:- "<<c;
    cout<<"\nis true:- "<<is_true;
	return 0;
}
//i/o from user
#include<iostream>
using namespace std;
int main(){
	int num1, num2;
	cout<<"Enter the value of num1\n";
	cin>>num1;
	cout<<"enter the value of num2\n";
	cin>>num2;
	cout<<"the sum is "<<num1+num2;
	return 0;
}

//operators :- arithmetic,assingment,comparison,logical
#include<iostream>

using namespace std;
int main(){
	int a=4, b=5;
	cout<<"operators in c++"<<endl;
	cout<<"following are the types of operators in c++"<<endl;
	//arithmetic operators 
	cout<<"the value of a+b is "<<a+b<<endl;
	cout<<"the value of a-b is "<<a-b<<endl;
	cout<<"the value of a/b is "<<a/b<<endl;
	cout<<"the value of a*b is "<<a*b<<endl;
	cout<<"the value of a%b is "<<a%b<<endl;
	cout<<"the value of ++a is "<<++a<<endl;
	cout<<"the value of --a is "<<--a<<endl;
	cout<<endl;
	//assingment opearator:- used to assign to values to variables
	int g=3, j=9;
	char d='d';
	//comparison operator 
	cout<<"the value of a==b is: "<<(a==b)<<endl;
	cout<<"the value of  a!=b is: "<<(a!=b)<<endl;
	cout<<"the value of a>b is: "<<(a>b)<<endl;
	cout<<"the value of a<b is: "<<(a<b)<<endl;
	cout<<"the value of a<=b is: "<<(a<=b)<<endl;
	cout<<"the value of a>=b is: "<<(a>=b)<<endl;
	cout<<endl;
	//logical opeartors
	cout<<"following are the logical operators in c++"<<endl;
	cout<<"the value of ((a==b) && (a<b)) logical AND opeartor is "<<((a==b) && (a<b))<<endl;
	cout<<"the value of ((a==b) || (a<b)) logical OR opeartor is "<<((a==b) || (a<b))<<endl;
	cout<<"the value of (!a==b) logical NOT opeartor is "<<((!a==b))<<endl;
	return 0;
}
	
