/*
CH-230-A
a9_p9.cpp
Amit Kushwaha
amkushwaha@jacobs-university.de
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string arr[17] = {"computer", "television", "keyboard", "laptop",
						"mouse", "random", "test", "make", "seventeen",
						"programming", "string", "reach", "twelve", 
						"elements", "search", "done", "desktop"};

	char vowels[10] = {'a', 'e', 'i', 'o', 'u'};


	int num, i, j;
	string guess;
	
	int rNumber; 
	srand(static_cast <unsigned int> (time(0))); 
	
	bool a = true, b = true;

	while (a) 		
	{
		int count = 0;
		rNumber = rand(); // Stores random number
		num = (rNumber % 17); // Stores number between 0 and 16	

		string copy = arr [num];		
		for (i = 0; i < (int)copy.length(); i++)
		{
			for (j = 0; j < 10; j++)
			{
				if (copy[i] == vowels [j])
				{
					copy[i] = '_';
				} // replaces vowels with underscore

			}
		}
		cout << copy <<endl;
		
		while (b)
		{
			
			cin >> guess;
			if(guess == "quit")
			{
				exit(1);
			} // exits the game
			count++;

			if ( arr[num] == guess) // if input is correct
			{
				cout << "Success!!!";
				cout << " Number of tries: " << count << endl;

				b = false;
				cout << "Play again?[Y/N]: ";
				char x;
				cin >> x;

				if (x == 'y' || x == 'Y') // if wants to play again
				{
					b = true; 
					break;	
					
				}
				else // if doesn't want to play
				{
					a = false;
					
				}
			}		
			
		}

	}
	return 0;
}
