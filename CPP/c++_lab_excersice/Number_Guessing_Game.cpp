#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

main(){
	int number,guess,attempt = 0;
	
	srand(time(0));
	number = rand() % 100 + 1;
	
	cout<<"The Number Guessing Game"<<endl;
	cout<<"thinking between 1-100"<<endl;
	
	while(true){
		cout<<"\n enter your guess:";
		cin>>guess;
		attempt++;
	
	if(guess > number){
		cout<<"it's too high! try again..";
	}
	else if(guess < number){
		cout<<"it's too low! try again..";
	}
	else{
		cout<<"\n Congratualations! You Guessed it in "<<attempt<<"attempts!";
		break;
		}
	}
	
}
