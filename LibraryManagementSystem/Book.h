#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
class Book
{
private:
	std::string title;
	std::string author;
	std::string ISBN;
	bool Isavailability;


public:
	// Constructor

	Book(const std::string& title, const std::string& author, const std::string& isbn);
	
	// Members
	void displayDetails() const;
	void add();
	void update();
	void del();
	void burrowBook();
	void returnBook();

};

