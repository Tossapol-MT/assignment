#include<iostream>
#include<iomanip>
using namespace std;
int chackNum(int,int);

int main() 
{
	int r,N1,count=0;
	srand(time(NULL));
	r = rand() % 10 + 1;
	cout << "###Welcome to guessing number games###"<<endl;
	cout << "Secret number has been chosen"<<endl;
	do {
		cout << "Guess the number (1 to 10) :  ";
		cin >> N1;
		chackNum(r, N1);
		count++;
	} while (r != N1);
	cout <<"The secret number is "<< r << endl;
	cout <<"You made "<< count <<" guesses "<< endl;
	return(0);
}

int chackNum(int Check,int N2) 
{
	if (Check == N2)
	{
		cout << "Congratulations!"<<endl;
	}
	else if (Check > N2)
	{
		cout << "The secret number is lower" << endl;
	}
	else if (Check < N2)
	{
		cout << "The secret number is higher" << endl;
	}
	return(Check, N2);
}
