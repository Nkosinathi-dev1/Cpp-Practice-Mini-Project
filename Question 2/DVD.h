#ifndef DVD_H
#define DVD_H

#include <string>

class DVD {
private:
	std::string name;
	std::string director;
	std::string category;
	float price;

public:
	DVD();
	DVD(std::string name, std::string director, std::string category, float price);

	void setName(std::string name);
	void setDirector(std::string director);
	void setCategory(std::string category);
	void setPrice();

	std::string getName() const;
	std::string getDirector() const;
	std::string getCategory() const;
	float getPrice() const;
};

#endif // DVD_H
