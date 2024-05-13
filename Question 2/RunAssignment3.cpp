#include "DVD.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <stack>

using namespace std;

void readFromFile(const string& filename, stack<DVD>& dvdStack) {
	ifstream file(filename);
	if (!file.is_open()) {
		throw string("Error: Unable to open file ") + filename;
	}

	string name, director, category;
	float price;
	while (file >> name >> director >> category >> price) {
		DVD dvd(name, director, category, price);
		dvd.setCategory(category);
		dvd.setPrice();
		dvdStack.push(dvd);
	}

	file.close();
}


int main() {
	stack<DVD> dvdStack;
	string filename = "DVD.txt";

	try {
		readFromFile(filename, dvdStack);

		while (!dvdStack.empty()) {
			DVD dvd = dvdStack.top();
			cout << dvd.getName() << " ";
			cout << dvd.getDirector() << " ";
			cout << dvd.getCategory() << " ";
			cout << dvd.getPrice() << endl;
			dvdStack.pop();
		}
	}
	catch (const string& error) {
		cout << error << endl;
	}

	return 0;
}
