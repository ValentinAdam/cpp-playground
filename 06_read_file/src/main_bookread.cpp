#include <iostream>
#include <string>
#include <vector>
#include <fstream>

/**
	Define a simple book.
*/
class Book
{
public:
	std::string name;
	std::string authors;

	void print()
	{
		std::cout << this->name << std::endl;
		std::cout << "\t(by " << this->authors << ")" << std::endl;
	}
};

/**
	Reads a vector of books from a text file.
	Note: the text file shall contain lines of text in pairs for the book name and authors
	E.g.
		BOOK 1
		AUTHOR 1
		BOOK 2
		AUTHOR 2
		BOOK 3
		AUTHOR 1, AUTHOR 2, AUTHOR 3
	@param file_name The name of the file to read from (must include path).
	@return Vector of books.
*/
std::vector<Book> readBooksFromTextFile(const std::string& file_name)
{
	std::vector<Book> results;

	// TODO: BEGIN read the file -------------------------------------
	int i = 1;
	Book myBook;
	std::ifstream myfile(file_name);
	std::string line;

	while (std::getline(myfile, line))
	{
		if (i % 2 == 0) 
		{
			myBook.authors = line;
			results.emplace_back(myBook);
			i = i + 1;

		}
		else 
		{
			i = i + 1;
			myBook.name = line;
		}

	}


	// E.g. Book myBook;
	//		...
	//		results.emplace_back(myBook);

	// TODO: END read file and add to results vector ------------------

	return results;
}

int main()
{
	// Read a collection of books from a file.
	// Simple examples can be found everywhere.
	// E.g. https://stackoverflow.com/questions/7868936/read-file-line-by-line-using-ifstream-in-c

	// Read the data
	std::string input_data("../../data/ermahgerd_berks.txt");
	std::cout << "Reading the data from " << input_data << std::endl;
	std::vector<Book> books_from_file = readBooksFromTextFile(input_data);

	// Print the data
	std::cout << "Here are all the books found in the data file..." << std::endl;
	for (auto book : books_from_file)
	{
		book.print();
	}

	return 0;
}
