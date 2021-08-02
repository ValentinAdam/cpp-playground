#include <string.h>
#include <iostream>

// Define the maximum length for the name to use.
// Specify the length of characters in the content (Excluding the terminator).
#define MAX_NAME_LEN 25
#define MAX_TITLE_LEN 50

struct Author
{
	char name[MAX_NAME_LEN + 1];

	void setName(char nameToSet[MAX_NAME_LEN])
	{
		strncpy(name, nameToSet, MAX_NAME_LEN);
		// overwrite the last character
		name[MAX_NAME_LEN] = 0;
	}

	void print()
	{
		std::cout << name << std::endl;
//		std::cout << "Author #" << id << std::endl;
//		std::cout << "------" << std::endl;
//		std::cout << this->name << std::endl;
	}
};

struct Book
{
	int id;
	char title[50];

	int numAuthors;
	Author authors[5];

	void addAuthor(Author author)
	{
		// TODO: add an author to the container authors array.
		numAuthors++;
	}

	void print()
	{
		std::cout << "Book #" << id << std::endl;
		std::cout << "------" << std::endl;
		std::cout << this-> title << std::endl;
		std::cout << this-> authors << std::endl;

		// TODO: add all authors

	}
};

void setBookName(Book& book, std::string name)
{
	strncpy(book.title, name.c_str(), MAX_TITLE_LEN);
}

int main()
{
	Book book1;
	Book book2;
	Book book3;
	Book book4;
	Book book5;
	Book book6;
	Author author;

	// Load the data into books
	book1.id = 1;
	book1.numAuthors = 0;
	setBookName(book1, "The origin of truth");
	author.setName("Gusti");
	book1.addAuthor(author);
	book1.print();
	author.print();

	book2.id = 2;
	book2.numAuthors = 0;
	setBookName(book2, "Arhanghelul Raul");
	author.setName("Ovidiu Eftimie");
	book2.addAuthor(author);
	book2.print();
	author.print();

	book3.id = 3;
	book3.numAuthors = 0;
	setBookName(book3, "Factfulness");
	author.setName("Hans Rosling");
	book3.addAuthor(author);
	book3.print();
	author.print();

	book4.id = 4;
	book4.numAuthors = 0;
	setBookName(book4, "Cartea junglei");
	author.setName("Ola Rosling");
	book4.addAuthor(author);
	book4.print();
	author.print();

	book5.id = 5;
	book5.numAuthors = 0;
	setBookName(book5, "Winnetou");
	author.setName("Anna Rosling Ronnlund");
	book5.addAuthor(author);
	book5.print();
	author.print();

	book6.id = 6;
	book6.numAuthors = 0;
	setBookName(book6, "Cei trei muschetari");
	author.setName("Alexandre Dumas");
	book6.addAuthor(author);
	book6.print();
	author.print();

	// Display the books
//	book1.print();
//	book2.print();
//	book3.print();
//	book4.print();
//	book5.print();
	return 0;
}