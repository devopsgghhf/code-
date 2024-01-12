//basic structure of c++ program 
#include<iostream>
// print the first hello world program
using namespace std;
int main(){
	cout<<"hello world";
	return 0;
}
//comments and variables 
#include<iostream>
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
	
//reference variables and typecasting 
 #include<iostream>
using namespace std;
int c=45;

int main(){
	**********Built in datatypes**************
	int a,b,c;
	cout<<"enter the value of a:-"<<endl;
	cin>>a;
	cout<<"enter the value of b:-"<<endl;
	cin>>b;
	c=a+b;
	cout<<"sum of a+b is:-"<<c;
	cout<<"the value of global c is:-"<<::c;
	
	**********Float ,double and long double literals*****************
	float d=3.45f;
	long double e=3.45l;
	cout<<"value of d is:- "<<d<<endl<<"value of e is:- "<<e<<endl;
	cout<<"the size of 3.45 is:- "<<sizeof(3.45)<<endl;
	cout<<"the size of 3.45 is:- "<<sizeof(3.45f)<<endl;
	cout<<"the size of 3.45 is:- "<<sizeof(3.45l)<<endl;
	cout<<"the size of 3.45 is:- "<<sizeof(3.45F)<<endl;
	cout<<"the size of 3.45 is:- "<<sizeof(3.45L)<<endl;*/
	
	********************Reference variables*****************************
	vishwajeet---------->vishwa--------->vishu-------->coder
	int x=9;
	int & y=x;
	cout<<x<<endl;
	cout<<y<<endl;*/
	
	-------------------------typecasting-----------------------------------
	int a=45;
	float b=45.5;
	cout<<"the value of a is:-"<<(float)a<<endl;
	cout<<"the value of a is:-"<<float(a)<<endl;
	cout<<"the value of b is:-"<<(int)b<<endl;
	cout<<"the value of b is:-"<<int(b)<<endl;
	int c= int(b);
    cout<<"the expression is "<<a + b<<endl;
	cout<<"the expression is "<<a +int(b)<<endl;
	cout<<"the expression is "<<a +(int)b<<endl;  
	return 0;
}

//constants,manipulators & operator precedence
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	**********constants******
	const float a=45.67;
	cout<<"value of a is "<<a<<endl;
	a=45.67;//you will get an error bcz a is a constant
	cout<<"value of a is "<<a;
	
	********************manipulators********************
	int a=3,b=4,c=5;
	cout<<"the value of a is:"<<setw(4)<<a<<endl;
	cout<<"the value of b is:"<<setw(4)<<b<<endl;
	cout<<"the value of c is:"<<setw(4)<<c<<endl;
	
	cout<<"the value of a is:"<<a<<endl;
	cout<<"the value of b is:"<<b<<endl;
	cout<<"the value of c is:"<<c<<endl; */
	
	********************operator precedence*************
    int a=3,b=4;
    int c=((((a*5)+b)-45)+87);
    cout<<c;
	return 0;

	
