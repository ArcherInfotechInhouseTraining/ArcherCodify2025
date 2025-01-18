
	// another example

#include<iostream>
#include<string.h>
using namespace std;

class Player
{
	int id;
	char nm[50];
	int score;
	static int m50,m100;
    public:
	void input()
	{
		cout<<endl<<"Enter the name, id and runs scored by players";
		cin>>nm>>id>>score;
		if(score>=100)
		{
			m100++;
		}
		else if(score>=50)
		{
			m50++;
		}
	}
	void output()
	{
		cout<<endl<<"Name: "<<nm<<"\t Id: "<<id<<"\t Runs scored: "<<score;
	}
	 void getcn_fif()
	{
		cout<<endl<<"No of 100s: "<<m100<<"\t No of 50s: "<<m50;
	}
};
int Player::m50, Player::m100;
int main()
{
	Player m1[5],a;



	for(int i=0;i<5;i++)
	{
		m1[i].input();
	}

	cout<<endl<<"------------------ Score Card ------------------\n";
	for(int i=0;i<5;i++)
	{
		m1[i].output();
	}
	//Player::
	a.getcn_fif();//function static kely mhnun te main function mdhech scope resoluction ne access kel.

	return 0;
}
