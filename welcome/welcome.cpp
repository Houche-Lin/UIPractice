#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {
	if (argc < 4 || argc >4) {
		cout << "usage" << endl;
		cout << "    " << " welcome" << " user" << " host" << endl;
	}
	else {
		cout << "Hello " << argv[2]<<endl;
		cout << argv[3] << " very much " << argv[1];
		cout << " to the CLI's world." << endl;
	}
	return 0;
}
