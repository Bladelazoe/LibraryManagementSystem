#include "Book.h"




// Constructor
Book::Book() 
{

}

Book::Book(const std::string& title, const std::string& author, const std::string& isbn)
	:title(title), author(author), ISBN(isbn), Isavailability(true)
{

}

// Member functions

void Book::add()
{
	std::cout << "Hello";
}
void Book::update()
{
}
void Book::del()
{
}

void Book::displayDetails() const
{
	std::cout << "Title " << title
		<< "\nAuthor: " << author
		<< "\nISBN: " << ISBN
		<< "\nAvailable: " << (Isavailability ? "Yes" : "No") << std::endl;
}

void Book::burrowBook()
{
	if (Isavailability)
	{
		Isavailability = false;
		std::cout << "Book burrowed successfully\n";
	}
	else
	{
		std::cout << "Book is not available.\n";
	}
}

void Book::returnBook()
{
}
