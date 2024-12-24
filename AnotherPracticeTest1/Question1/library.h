#ifndef LIBRARY_H_
#define LIBRARY_H_
#include <iostream>
#include <vector>

class Library
{

public:
	struct Book
{
std::string name;
std::string author;	
};

Library();
Library(Book book);

bool add_book(const Book book);

bool remove_book(const Book other);

// Returns location of book.
int search_by_name(const std::string name); 
            int search_by_author(const std::string author);

private:
	std::vector<Book> lib_;
};

#endif
