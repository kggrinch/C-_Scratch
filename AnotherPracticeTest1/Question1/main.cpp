#include "library.h"
#include <iostream>

int main()
{

  Library::Book book1;
  Library::Book book2;
  book1.name = "Book1";
  book1.author = "me";
  book2.name = "Book2";
  book2.author = "meAgain";

  Library library;

  library.add_book(book1);
  library.add_book(book2);

  std::cout << library.search_by_name("Book1") << "\n";
  std::cout << library.search_by_author("meAgain") << "\n";

  library.remove_book(book2);
  std::cout << library.search_by_name("Book2") << "\n";

  return 0;
}