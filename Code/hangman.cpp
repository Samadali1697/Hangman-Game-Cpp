#include <conio.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;

void display();
void head();
void tummy();
void leftleg();
void rightleg();
int remTries(int t){
	cout<<"\t\t\t\t\t\t\t Tries: "<<t<<endl;
	return 1;
}

int main()
{
	char name[4];
	display();
	cin>>name;
	system("cls");
	int numbOfTries = 4;
	
	remTries(numbOfTries);
	head();
	tummy();
	leftleg();
	rightleg();
	cout<<endl<<endl;
	
	char a,b,c,d;  // every letter declaration
    while(a!=name[0] && numbOfTries>0)
    {
		cout<<"\nenter first letter of the word :";   //for first letter
		cin>>a;
		if (a!=name[0])
		{
			system("cls");
			numbOfTries--;
			remTries(numbOfTries);
			switch(numbOfTries){
				case 4:	head();
						tummy();
		  				leftleg();
		  				rightleg();	
						break;
				case 3:	tummy();
		  				leftleg();
		  				rightleg();	
						break;
				case 2:	leftleg();
		  				rightleg();	
						break;
				case 1:	leftleg();	
						break;
				case 0:	cout<<"You Failed!";
						break;
			}
		  	
		}
	}
	

	while(b!=name[1] && numbOfTries>0)
	{
		cout<<"\nenter second letter of the word :";   //for sencond letter
		cin>>b;
		if (b!=name[1]);
		{
			if (b!=name[1])
			{
		   		system("cls");
				numbOfTries--;
				remTries(numbOfTries);
				switch(numbOfTries){
					case 4:	head();
							tummy();
		  					leftleg();
		  					rightleg();	
							break;
					case 3:	tummy();
		  					leftleg();
		  					rightleg();	
							break;
					case 2:	leftleg();
		  					rightleg();	
							break;
					case 1:	leftleg();	
							break;
					case 0:	cout<<"You Failed!";
							break;
				}
			}
		}
	}
	
	
	while(c!=name[2] && numbOfTries>0)
	{
		cout<<"\nenter third leter of the word :";  // for third letter
		cin>>c;
		if (c!=name[2])
		{
			if (c!=name[2])
			{
				system("cls");
				numbOfTries--;
				remTries(numbOfTries);
				switch(numbOfTries){
					case 4:	head();
							tummy();
		  					leftleg();
		  					rightleg();	
							break;
					case 3:	tummy();
		  					leftleg();
		  					rightleg();	
							break;
					case 2:	leftleg();
		  					rightleg();	
							break;
					case 1:	leftleg();	
							break;
					case 0:	cout<<"You Failed!";
							break;
				}
			}
		}
	}
	
	
	while(d!=name[3] && numbOfTries>0)
	{
		cout<<"\nenter fourth leter of the word :";  // for fourth letter
		cin>>d;
		if (d!=name[3])
		{
			if (d!=name[3])
			{
				system("cls");
				numbOfTries--;
				remTries(numbOfTries);
				switch(numbOfTries){
					case 4:	head();
							tummy();
		  					leftleg();
		  					rightleg();	
							break;
					case 3:	tummy();
		  					leftleg();
		  					rightleg();	
							break;
					case 2:	leftleg();
		  					rightleg();	
							break;
					case 1:	leftleg();	
							break;
					case 0:	cout<<"You Failed!";
							break;
				}
			}
		}	
    }
    
   
    if (a==name[0] && b==name[1] && c==name[2] && d==name[3]) // for final result
    {
    	cout<<"\nYou Won :)";
    }
    else
    {
    	cout<<"\nYou Failed :(";
    }
    getch();
}


void display()
{
	again:
	cout<<"Rules Of The Game!\n\n";
	cout<<"You Can Enter A Word Of Four Letters. Then Tell Your Friend To Guess That Word.\n";
	cout<<"They Have To Enter That Word Letter By Letter.\n";
	cout<<"If They Entered Any Letter Wrong One Part Of The Body Will Be Removed.\n";
	cout<<"\nFor First Letter = Head.\nFor Second Letter = Tummy.\n";
	cout<<"For Third Letter = Right Leg.\nAnd For Fourth Letter = Left Leg.\n";
	cout<<"\nIf You Have Understood The Instructions Press 1 To Play. :)\n";
	cout<<"Or Any Other Number To Repeat Instructions! ";
	int a;
	cin>>a;
	if (a==1)
	{
		system("CLS");
	}
	else
	{
		system("CLS");
		goto again;
	}
	cout<<"Type 4 Letters Word Without showing it to any one :) \nword :";
}




void head()
{
	cout<<"\t (',')";
}


void tummy()
{
	cout<<"\n\t <)  )/";
}


void leftleg()
{
	cout<<"\n\t  |";
}


void rightleg()
{
	cout<<" |";
}
