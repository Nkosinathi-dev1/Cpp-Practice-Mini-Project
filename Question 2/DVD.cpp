#include "DVD.h"
#include <iostream>

using namespace std;

DVD::DVD() : name(""), director(""), category(""), price(0.0) {}

DVD::DVD(string name, string director, string category, float price) : name(name), director(director), category(category), price(price) {}

void DVD::setName(string name) {
	this->name = name;
	if (!name.empty())
		this->name[0] = toupper(this->name[0]);
}

void DVD::setDirector(string director) {
	this->director = director;
	if (!director.empty())
		this->director[0] = toupper(this->director[0]);
}

void DVD::setCategory(string category) {
	this->category = category;
	for (char& c : this->category)
		c = toupper(c);
}

void DVD::setPrice() {
	if (category == "ACTION")
		price = 45.00;
	else if (category == "COMEDY")
		price = 40.00;
	else if (category == "DRAMA")
		price = 30.00;
	else
		price = 25.00;
}

string DVD::getName() const {
	return name;
}

string DVD::getDirector() const {
	return director;
}

string DVD::getCategory() const {
	return category;
}

float DVD::getPrice() const {
	return price;
}
