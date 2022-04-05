////
// Name: Josh Valerio
// Section: CS 131 - 2830
// Program Name: Lecture 6 - Activity
////

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	cout << "My name is Josh Valerio" << endl;
	cout << "Program Name: Lecture 6 - Activity" << endl << endl;

	int LectureNum;
	int	TotalNum = 0;
	int counter = 0;
	ifstream LectureFile;

	LectureFile.open("infileL6.txt");
	if (LectureFile.fail()) {
		cout << "Program Error. File unopened" << endl;
		exit(EXIT_FAILURE);
	}
	while (!LectureFile.eof()) {
		LectureFile >> LectureNum;
		TotalNum = LectureNum + TotalNum;
		counter++;
	}
	LectureFile.close();

	cout << "The total of all the numbers is " << counter << endl;
	cout << "The average of all the numbers is " << TotalNum / counter << endl;

	system("pause");
	return 0;
}
