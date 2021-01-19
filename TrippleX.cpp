#include<iostream> // preprocesser Directive 
#include<ctime>

void PrintIntroduction(int Difficulty)
{
	std::cout << "You are a screat agent Breaking into a level" << Difficulty;
	std::cout << " secure server room...\nEnter the correct code to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
	// Expression Statements
	// print welcome message to terminal
	PrintIntroduction(Difficulty);

	// Declartion statements for 3 number 
	const int CodeA = rand() % Difficulty + Difficulty;
	const int CodeB = rand() % Difficulty + Difficulty;
	const int CodeC = rand() % Difficulty + Difficulty;

	const int CodeSum = CodeA + CodeB + CodeC;

	const int CodeProduct = CodeA * CodeB * CodeC;

	// Expression Statements
	std::cout << std::endl;
	std::cout << "\n+ There are 3 number in the code" << std::endl;
	std::cout << "\n+ The code add-up to:" << CodeSum << std::endl;
	std::cout << "\n+ The code Multiply to:" << CodeProduct << std::endl;

	// Store Player Guess
	int GuessA, GuessB, GuessC;
	std::cin >> GuessA >> GuessB >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	// Check if the player guess is correct 
	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
	{
		std::cout << "\n*** Well done agent! You have extracted a file! Kepp going! ***";
		return true;

	}
	else
	{
		std::cout << "\n*** You entered the wrong code! Careful agent Try again! ***";
		return false;
	}
}



int main() // Main function 
{
	srand(time(NULL));  //create new random sequence based on time of a day
	int LevelDifficulty = 1; 
	int const MaxDifficukllty = 5;


	while (LevelDifficulty <= MaxDifficukllty) //Loop the game are complete 
	{

		bool BLevelComplete = PlayGame(LevelDifficulty);
		std::cin.clear();
		std::cin.ignore();

		if (BLevelComplete)
		{
			// Increase the level difficulty 
			++LevelDifficulty;

		} 
	}
	std::cout << "\n *** Great work agent! You got all the files! Now get out of there! ***\n";
	return 0; // return statement 
}
