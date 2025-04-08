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
	for (int i = 0; i < 6; i++)
	{
		cout << Ball[i] << endl;
	}
	
	

	
}

int main() 
{
	
	Initialize();
	Shuffle();
	Print();


	return 0;
}