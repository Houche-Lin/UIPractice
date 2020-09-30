#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {
	if (argc < 4 || argc >4) {
		cout << "usage" << endl;
		cout << "    " << argv[1] << " user" << " host" << endl;
	}
	else {
		cout << "Hello " << argv[2]<<endl;
		cout << argv[1] << " very much " << argv[3];
		cout << "\nnice to meet you." << endl;
	}
	return 0;
}
