#include <iostream>
#include <algorithm>
#include <string>

#define Ball_COUNT		45

using namespace std;
//global variable
int Ball[Ball_COUNT] = { 0, };

void Initialize()
{
	srand((unsigned int)time(NULL));

	for (int Index = 0; Index < Ball_COUNT; Index++)
	{
		Ball[Index] = Index+1;
	}
}

void Shuffle()
{
	int Temp = 0;
	for (int Count = 0; Count < Ball_COUNT * 1000; Count++)
	{
		int First = rand() % Ball_COUNT;
		int Second = rand() % Ball_COUNT;
		Temp = Ball[First];
		Ball[First] = Ball[Second];
		Ball[Second] = Temp;
	}
}


void Print()
{
	cout << "´çÃ·¹øÈ£: " << endl;
	cout << Ball[0] << endl;
	cout << Ball[1] << endl;
	cout << Ball[2] << endl;
	cout << Ball[3] << endl;
	cout << Ball[4] << endl;
	cout << Ball[5] << endl;

	
}

int main() 
{
	
	Initialize();
	Shuffle();
	Print();


	return 0;
}