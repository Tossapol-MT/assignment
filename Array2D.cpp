#include<iostream>
#include<iomanip>
using namespace std;

void display(int num[5][6]);
void graph(int num[5][6]);

int main() 
{
	int num[5][6];
	srand (time(NULL));
	for (int r = 0; r < 5; r++)
	{
		for (int c = 0; c < 6; c++) 
		{
			num[r][c] = rand() % 10;
		}
	}
	display(num);
	graph(num);

	system("pause");
	return (0);

}

void display(int num[5][6])
{

	for (int r = 0; r < 5; r++)
	{
		
		for (int c = 0; c < 6; c++)
		{
			cout << num[r][c] << "\t";
		}
		cout << endl;
	}

}

void graph(int num[5][6])
{
	cout << setfill('-') << setw(20)<<" "<<"display graph " << setfill('-') << setw(20)<<" " << endl;
	cout << setfill(' ') << setw(8) << " " << "0" << setfill(' ') << " ";
	cout << setfill(' ') << setw(6) << " " << "1" << setfill(' ') << " ";
	cout << setfill(' ') << setw(6) << " " << "2" << setfill(' ') << " ";
	cout << setfill(' ') << setw(6) << " " << "3" << setfill(' ') << " ";
	cout << setfill(' ') << setw(6) << " " << "4" << setfill(' ') << " ";
	cout << setfill(' ') << setw(6) << " " << "5" << setfill(' ') << " "<<endl;
	cout << setfill('-') << setw(54) << " " << endl;
	
	for (int r = 0; r < 5; r++)
	{
		cout << r << "|";
		for (int c = 0; c < 6; c++)
		{
			if (num[r][c] != 0)
				cout << "\t" << "*";
			else
				cout << "\t" << " ";
		}
		cout << endl;
	}

}