#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {
	if (argc < 3 || argc >3) {
		cout << "usage" << endl;
		cout << "    " << "host" << argv[0] << "user" << endl;
	}
	else {
		cout << "Hello" << argv[1];
		cout << argv[3] << "very much" << argv[0];
		cout << "Welcome to the CLI's world." << endl;
	}
}
