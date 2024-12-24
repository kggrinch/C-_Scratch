#include <iostream>

// This works too
template<class T>
int removeItems(T* array, int length, int target)
{
  int instancesOfTarget = 0;
  for(int i = 0; i < length; i++)
  {
    if(*(array + i) == target)
    {
      instancesOfTarget++;
    }
  }

  T* newArray = new T[length - instancesOfTarget];
  int index = 0;
  for(int i = 0; i < length; i++)
  {
    if(*(array + i) != target)
    {
      *(newArray + index) = *(array + i);
      index++;
    }
  }

  for(int i = 0; i < length-instancesOfTarget; i++)
  {
    *(array + i) = *(newArray + i);
  }
  delete[] newArray;
  newArray = nullptr;

  return length - instancesOfTarget;
}


// Another easier implementation that does everything in place without allocating new memory
template<class T>
int removeElements(T* array, int length, int target)
{
  int index = 0;
  for(int i = 0; i < length; i++)
  {
    if(*(array + i) != target)
    {
      *(array + index) = *(array + i);
      index++;
    }
  }

  return index;
}

// Same as ^ but with retunred bool
template <class T>
bool removeElement(T* array, int& length, T& target)
{
// Keep track of index to place into new position
int index = 0;
for(int i = 0; i < length; i++)
{
if(*(array + i) != target)
{
*(array + index) = *(array + i);
index++;
}
}
// Check if target does not exist
if(index == length)
{
	return false;
}
// Return the new length with removed elements in the array.
else
{
length = index;
return true;
}
} 








int main()
{

  int array[5] = {1, 2, 3, 1, 4};

  int newSize = removeElements(array, 5, 1);

  for(int i = 0; i < newSize; i++)
  {
    std::cout << *(array + i) << " ";
  }

  

  return 0;
}