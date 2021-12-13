#include<iostream>
#include<conio.h>
using namespace std;
int add (int a, int b){
	return a+b;
}
int sub (int a, int b)
{
	return a-b;
}
float division(int a , int b){
	return a/b;
	
}
int multi(int a , int b){
	return a*b;
}
int fact(int a){
	long facto=1;
	for(int i=a; i>=1; i--){
		facto*=i;
	}
	cout<<"The Factorial of a Given number is "<<facto;
	return facto;
}
int square(int a){
return a*a;	
}
int cube(int a){
	return a*a*a;
}
void table(int a){
	for(int i=1; i<=10; i++){
	cout<<a<<"*"<<i<<"="<<a*i<<endl;
	} 

}
void AdditionOfMatrix(int a[3][3], int b[3][3]){
	for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
	cout<<a[i][j] + b[i][j]<<" ";}
	cout<<endl;
	}
	}
	void multi(int x[3][3],int y[3][3])
	{
	int c[3][3];
	for(int i=0; i<3; i++)
	{
	for(int j=0; j<3; j++)
	{
	c[i][j]=(x[i][j]*y[i][j]);
	cout<<c[i][j]<<" ";
	}
	cout<<endl;
	}
}
void transpose(int z[3][3])
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<z[j][i]<<" ";
		}
	cout<<endl;
	}
}
int main()
{
	int choice;
	int a,b;
	char ch;
	do{
	cout<<"\n\t\t WellCome To The MathWorld";
	cout<<"\n\t\t\t MENU";
cout<<"\n 1- Addition";
cout<<" \n 2- Subtraction";
cout<<" \n 3-Division"; 
cout<<"\n 4-Multiplication"; 
cout<<"\n 5-Factorial";
cout<<" \n 6-Square";
cout<<"\n 7-cube";
cout<<" \n 8-Table";
cout<<"\n 9- Addition of Matrix";
cout<<"\n 10-Multiplication of Matrix";
cout<<"\n 11-Transpose Of A Matrix \n";
cout<<"\n\t\t Select Any One Number from Above "<<endl;
cin>>choice;
switch(choice){
	case 1:
	cout<<"Enter the value of Two Number to Perform the Addition "<<endl;
	cin>>a>>b;
	cout<<add(a,b);
	break;
	case 2:
	cout<<"Enter the value of Two Number to Perform the Subtraction "<<endl;
	cin>>a>>b;
	cout<<sub(a,b);
	break;
	case 3:
	cout<<"Enter the value of Two Number to Perform the Division "<<endl;
	cin>>a>>b;
	cout<<division(a,b);
	break;
	case 4:
	cout<<"Enter the value of Two Number to Perform the Multiplication "<<endl;
	cin>>a>>b;
	cout<<multi(a,b);
	break;
	case 5:
	cout<<"Enter the Number to Calculate the Factorial "<<endl;
	cin>>a;
	cout<<fact(a);
	break;
	case 6:
	cout<<"Enter the Number to Get it's Square "<<endl;
	cin>>a;
	cout<<square(a);
	break;
	case 7:
	cout<<"Enter the Number To Get it's Cube "<<endl;
	cin>>a;
	cout<<cube(a);
	case 8:
	cout<<"Enter the Number to Get Table "<<endl;
	cin>>a;
	table(a);
	break;
	case 9:
	cout<<"3x3 order matrix only "<<endl;
	int i,j;
	int a[3][3];
	int b[3][3];
	cout<<"Enter The Matrix A"<<endl;
	for(i=0; i<3; i++){
	for(j=0; j<3; j++){
	cin>>a[i][j];		}
	cout<<endl;
	}
	cout<<"Enter the matrix B"<<endl;
	for(i=0; i<3; i++){
	for(j=0; j<3; j++){
	cin>>b[i][j];		}
	cout<<endl;
	}
	cout<<"the Matrix A is"<<endl;
	for(i=0; i<3; i++)
	{
	for(j=0; j<3; j++){
	cout<<a[i][j]<<" ";
	}
	cout<<endl;
	}
	cout<<"the Matrix B is"<<endl;
	for(i=0; i<3; i++)
	{
	for(j=0; j<3; j++){
	cout<<b[i][j]<<" ";
	}
	cout<<endl;
	} 
	cout<<"Addition Of Matrix"<<endl;
	AdditionOfMatrix(a,b);
	break;
	case 10:
	cout<<"Multiplication Of Matrix 3x3 Order "<<endl;
	int x[3][3], y[3][3];
	cout<<"Enter the elements of 1st matrix: "<<endl;
	for(int i=0; i<3; i++)
	{
	for(int j=0; j<3; j++)
	{
	cin>>x[i][j];
	}
	cout<<endl;
	}
	cout<<"Enter the elements of second matrix: "<<endl;
	for(int i=0; i<3; i++)
	{
	for(int j=0; j<3; j++)
	{
	cin>>y[i][j];
	}
	cout<<endl;
	}
	cout<<endl<<"Matrix A: "<<endl;
	for(int i=0; i<3; i++)
	{
	for(int j=0; j<3; j++)
	{
	cout<<x[i][j]<<" ";
	}
	cout<<endl;
	}
	cout<<endl<<"Matrix B: "<<endl;
	for(int i=0; i<3; i++)
	{
	for(int j=0; j<3; j++)
	{
	cout<<y[i][j]<<" ";
	}
	cout<<endl;
	}
	cout<<"The multiplication these matrices is: "<<endl;
	multi(x,y);		
	break;
	case 11:
	//cout<<"The Transpose Of A Matrix 3x3 Order"<<endl;
	int z[3][3];
	cout<<"Enter the values of matrix having order 3x3:"<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
		cin>>z[i][j];
		}
		cout<<endl;
	}
	cout<<"The matrix is: "<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<z[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"The transpose of the matrix is: "<<endl;
    transpose(z);
    break;
	default:
	cout<<"!!!!Invalid Number!!!!!"<<endl;
	} 
	cout<<"\n If You want continue / End then press Y/N"<<endl;
	cin>>ch; }
	while(ch!='N' && ch !='n');	
}
