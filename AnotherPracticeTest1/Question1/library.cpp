#include "library.h" // file name
#include <iostream>
#include <vector>

Library::Library()
{
	
}
Library::Library(Book book)
{
this->add_book(book);	
}


bool Library::add_book(const Book book)
{
	lib_.push_back(book);
	return true;
}

bool Library::remove_book(const Book other)
{
	for(int i = 0; i < lib_.size(); i++)
{
if(lib_[i].name == other.name && lib_[i].author == other.author)
{
	lib_.erase(lib_.begin() + i);
	return true;
}	
}
return false;
}

int Library::search_by_name(const std::string name)
{

for(int i = 0; i < lib_.size(); i++)
{
if(lib_[i].name == name)
{
	return i;
}	
}
return -1;
}

int  Library::search_by_author(const std::string author)
{

for(int i = 0; i < lib_.size(); i++)
{
if(lib_[i].author == author)
{
	return i;
}	
}
return -1;
}
