#include<iostream>
#include<math.h>

using namespace std;

double hypotenuse(int a, int b) {
	int s1 = a * a;
	int s2 = b * b;
	return sqrt(s1 + s2);

}

int main() {
	int cookies;
	char pepl;
	char cart;
	bool candy;
	bool fruit;
	char input;
	int input1;
	int input2;

	cout << "how many cookies you got?" << endl;
	cin >> cookies;
	if (cookies < 5)
		cout << "here u need a cookie" << endl;
	else if (cookies < 10)
		cout << "thats a decent amount of cookies" << endl;
	else if (cookies >= 10)
		cout << "you da cookie god" << endl;
	else
		cout << "you get no cookies" << endl;

	cout << "(b)art, (s)cooby doo, (r)ick sanchez, or (d)affy duck" << endl;
	cin >> pepl;
	if (pepl == 'b')
		cout << "eat my shorts" << endl;
	else if (pepl == 's')
		cout << "ruh roh raggy" << endl;
	else if (pepl == 'r')
		cout << "wubba lubba dub dub" << endl;
	else if (pepl == 'd')
		cout << "sufferin' succotash" << endl;
	else
		cout << "that cartoon doesn't matter" << endl;

	cout << "Lets try again" << endl;
	cout << "(b)art, (s)cooby doo, (r)ick sanchez, or (d)affy duck" << endl;
	cin >> cart;
	switch (cart) {
		case 'b':
			cout << "eat my shorts" << endl;
			break;
		case 's':
			cout << "ruh roh raggy" << endl;
			break;
		case 'r':
			cout << "wubba lubba dub dub" << endl;
			break;
		case 'd':
			cout << "sufferin' succotash" << endl;
			break;
		default:
			cout << "You're irrelevant" << endl;
			break;

	}

	cout << "(i)ce cream or (c)andy?" << endl;
	cin >> input;
	if (input == 'i')
		candy = false;
	else
		candy = true;
	cout << "(c)hocolate or (f)ruit?" << endl;
	cin >> input;
	if (input == 'f')
		fruit = true;
	else
		fruit = false;

	if (candy == true) {
		if (fruit == true)
			cout << "Starburst" << endl;
		else
			cout << "Chocolate bar" << endl;
	}
	else if (candy == false) {
		if (fruit == true)
			cout << "strawberry blizzard" << endl;
		else
			cout << "hot fudge sundae" << endl;
	}

	cout << "give me two whole numbers" << endl;
	cin >> input1;
	cin >> input2;
	cout << "hypotenuse value: "<<hypotenuse(input1, input2) << endl;

	class Simon {

		private:
			int hunger;
			int tired;
			int bored;
		public:
				




	};


	

}
