/**
Dog class example is written by Dr. Jan Pearce to show simple use of a C++ class
with
- constructors (aka initializers),
- accessors (aka getters),
- and mutator (aka setter) methods
*/

#include <iostream>
#include <string>
using namespace std; 

class Dog // begin declaration of the Dog class
{
public:                    // begin public section
	friend ostream& operator << (ostream& stream, const Dog& dog); // overload << operator
	Dog() { // default constructor
		dogName = "dog";  //set to generic dog name
	}
	Dog(string whatName) { // constructor
		dogName = whatName;  //set to dog name parameter
	}
	string getName() const { // accessor aka getter method
		// returns value of private member variable
		return dogName;
	}
	void setName(string name) { // mutator aka setter method
	// set member variable dogName to
	// value passed in by parameter name
		dogName = name;
	}
	void bark() const {
		cout << "Woof!\n";
	}
	void show() const {
		/** shows dog pic and display's dogName
		Art modified from https://www.asciiart.eu/animals/dogs
		original art by by Joan Stark */
		cout << "  .-\"-." << endl;          
		cout << " /|6 6|\\" << endl;
		cout << "{/(_0_)\\}" << endl;
		cout << " _/ ^ \\_" << endl;
		cout << "(/ /^\\ \\)-'" << endl;
		cout << " \"\"' '\"\" " << endl;
		cout << "   " << dogName << "\n" << endl;
		return; //optional return
	}
private:                   // begin private section
	string dogName;        // private member 
}; //don't forget semi-colon with C++ classes!!

ostream& operator << (ostream& stream, const Dog& dog) {
	stream << "  .-\"-." << endl;
	stream << " /|6 6|\\" << endl;
	stream << "{/(_0_)\\}" << endl;
	stream << " _/ ^ \\_" << endl;
	stream << "(/ /^\\ \\)-'" << endl;
	stream << " \"\"' '\"\" " << endl;
	stream << "   " << Dog.dogName << "\n" << endl;
	return stream;
}


int main() {
	char stopme;

	Dog averagedog; //uses default constructor
	averagedog.show();

	averagedog.setName("Doggie"); //use of setter setName()
	cout << "\nI call my dog: " << averagedog.getName() << endl; //use of getter getName()
	cout << "My dog likes to say: ";
	averagedog.bark(); //use of method bark()

	Dog lassiedog("Lassie"); //uses constructor
	cout << endl;
	lassiedog.show();

	cin >> stopme;  //holds console open in some cases
	return 0;
}
