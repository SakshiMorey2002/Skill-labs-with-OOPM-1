//To Add Two Numbers 
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,temp;
	cout << "enter first number" << endl;
	cin >> n1;
	cout << "enter second number" <<endl;
	cin >> n2;
	cout <<"First Number="<<n1<<endl<<"Second Number="<<n2<<endl;
	cout << "Addition of " <<n1<<" and "<<n2<<" is "<<n1+n2;
	cout<<"\nSwapping \n";
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"Swapped numbers n1= "<<n1<<" and n2= "<<n2<<endl;
	cout<<"even or odd \n";
	if(n1%2==0)
		cout<<n1<<" is even \n";
	else
		cout<<n1<<" is odd \n";
	
	return 0;
}



//TO PRINT NUMBERS ENTERED BY USER
// Print Number Entered by User 

#include<iostream>
using namespace std; int main()
{
int num1,num2;
cout<<"\n Enter 2 numbers"; cin>>num1>>num2;
cout<< " Entered numbers are:" << num1<< " " << num2; return 0;
}

#include<iostream>
using namespace std;
int main()
{
int n1,n2,temp;
	cout << "enter first number" << endl;
	cin >> n1;
	cout << "enter second number" <<endl;
	cin >> n2;
	cout<<"Swapped numbers n1= "<<n2<<" and n2= "<<n1<<endl;
	return 0;
}



// To check whether the number is even or odd
#include<iostream> 
using namespace std;
 

int main()
{
int num=5;
cout<<"\n Number is"; cin>>num;

  if ( num % 2 == 0) cout<<num<<" is even"; else
cout<<num<<" is odd";
}
