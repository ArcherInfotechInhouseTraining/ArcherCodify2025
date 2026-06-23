// another example : Scores of players in series of a match

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
		cout<<endl<<"Enter the name, id and runs scored by players: ";
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
	static void getcn_fif()
	{
		cout<<endl<<"No of 100s: "<<m100<<"\t No of 50s: "<<m50;
	}
};

int Player::m50, Player::m100;

int main()
{
	Player m1[5];


	for(int i=0;i<5;i++)
	{
		m1[i].input();
	}

	cout<<endl<<"------------------ Score Card ------------------\n";
	for(int i=0;i<5;i++)
	{
		m1[i].output();
	}

	Player::getcn_fif();

	return 0;
}
