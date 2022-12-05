//Noah Fineman
#include <iostream>

using namespace std;

template <typename T>

T half(T number) {
	
	number = number / 2;
	if (*typeid(number).name() == 'i') {
		number = static_cast <int> (round(number + .5f));
	}

		return number;
}


int main() {

	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	return 0;
}

