/* This is a sample for the vector class*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<char> letter; //a vector of the character type called letter
	//how to put things into the end of a vector 
	letter.push_back('A'); //letter ={A}
	letter.push_back('B'); // letter = {A, B}
	letter.push_back('C'); // letter = {A, B, C}

	cout << letter.back(); // returns the last element of the vector (C)
	cout << letter.front(); //returns the first element of the vector (A)
	cout << letter.at(1); // returns the element in the index referenced to. In case, index at 1 (B)

	letter.pop_back(); // will remove the last element in the vector (C)
	cout << letter.back(); // now it will show B instead of C

	//remember to stay inside the vectors range
	cout << letter.at(100); // the vector only has "0, 1" elements (A,B). This will throw a massive error. Hit red stop button and close out of vector class file.

	return 0;
}