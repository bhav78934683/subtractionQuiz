#include <iostream>
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions
using namespace std;

int main()
{
	// 1. Generate two random single-digit integers
	srand(time(0));
	int number1 = rand() % 10;
	int number2 = rand() % 10;

	// 2. If number1 < number2, swap number1 with number2
	if (number1 < number2)
	{
		int temp = number1;
		number1 = number2;
		number2 = temp;
	}

	// 3. Prompt the student to answer "What is number1 - number2"
	cout << "What is " << number1 << " - " << number2 << "? ";
	int answer;
	cin >> answer;
	int correctAnswer = number1 - number2;
	// 4. Display the correct answer if the student answer is wrong
	if (correctAnswer != answer)
	{
		cout << "Wrong answer.\n"
			<< number1 << " - " << number2 << " = " << correctAnswer << endl;

	}
	else
		cout << "You got it!" << endl;

	return 0;
}
