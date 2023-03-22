#include<iostream>
using namespace std;

int main() {
	string fname;
	string lname;
	cout << "What is your name?\n";
	cin >> fname;
	cout << "what is your sure-name?\n";
	cin >> lname;
	cout << "The length of the given name is " << fname.size()+lname.size() << endl;
	return 0;
}
