#include<iostream>
using namespace std;

int main()
{
	cout << "\n___________________________________________" << endl;

	cout << "\n_____ Welcome To Grade Calculator App _____" << endl;

	cout << "\n___________________________________________" << endl;

	// grade declartion 
	float studentGrade;

    cout << "\n___ Please enter student grade (0-100) ____" << endl;

	cin >> studentGrade;

	// we will use if statement to calculate studen grade

	if (cin.fail())
	{
		cout << "\n______ YOU ENTERED AN INVALID NUMBER ________" << endl;

		return 1;

	}

	else if (studentGrade >= 85 && studentGrade <= 100)
	{
		cout << "\n_______ YOUR GRADE IS EXCELLENT ________" << endl;
	}
	else if (studentGrade >= 75 && studentGrade < 85)
	{
		cout << "\n_______ YOUR GRADE IS VERY GOOD ________" << endl;

	}
    else if (studentGrade >= 65 && studentGrade < 75)
	{
		cout << "\n__________ YOUR GRADE IS GOOD ____________" << endl;

	}
	else if (studentGrade >= 50 && studentGrade < 65)
	{
		cout << "\n_____________ YOU PASS ___________________" << endl;

	}
	else if (studentGrade >= 0 && studentGrade < 50)
	{
		cout << "\n_____________ YOU FAIL ___________________" << endl;

	}
    else
	{
		cout << "\n_____ YOU ENTERED AN INVALID NUMBER ______" << endl;
	}

	return 0;

}
