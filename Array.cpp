#include<iostream>
#include<string>
using namespace std;
void ListStudent(string Name[40], int Score[40], int Num);
char Calgrade(int Score);

int main() 
{
	int Num,Score[40];
	string Name[40];
	
	cout << "Input Number of Student : ";
	cin >> Num;
	for (int i = 0; i < Num; i++) 
	{
		cout << "Input Name : ";
		cin >> Name[i];
		cout << "Input Score " << i+1 << ": ";
		cin >> Score[i];
	}
	ListStudent(Name, Score, Num);
	return(0);
}

void ListStudent(string Name[40],int Score[40], int Num) 
{
	for (int i = 0; i < Num; i++)
	{
		cout << "Student Name : " << Name[i]<<"\t";
		cout << "Score " << i + 1 << " = " << Score[i] << "\t" << Calgrade(Score[i])<<endl;
	}

}

char Calgrade(int Score) 
{
	if (Score >= 80 && Score <= 100)
		return ('A');
	if (Score >= 70 && Score <= 79)
		return ('B');
	if (Score >= 60 && Score <= 69)
		return ('C');
	if (Score <= 59)
		return ('D');
}