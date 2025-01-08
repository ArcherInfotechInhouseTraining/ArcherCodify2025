
#include<iostream>
using namespace std;
/*
int calcsum(int p, int q)
{
	return p+q;
}*/
int calcsum(int a, int b)
{
	return a+b;
}
int calcsum(int a, int b,int c)
{
	return a+b+c;
}
int calcsum(int a, int b,int c,int d)
{
	return a+b+c+d;
}
int main()
{
	int a,b,c,ans;

	cout<<endl<<"Enter any three int values: ";
	cin>>a>>b>>c;

	ans=calcsum(a,b);
	cout<<endl<<"ans: "<<ans;

	ans=calcsum(a,b,c);
	cout<<endl<<"ans: "<<ans;

	ans=calcsum(a,b,c,100);
	cout<<endl<<"ans: "<<ans;

}
