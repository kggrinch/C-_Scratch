#include <iostream>

template<class T>
T* merge_sort_array(T array1[], T array2[], int length1, int length2)
{
	T* new_array = new T[length1 + length2]; // new array
	
// copy from first array	
	for(int i = 0; i < length1; i++)
{
new_array[i] = array1[i];	
}

// copy from second array
for(int j = length1, m = 0; j < (length1 + length2); j++, m++)
{
new_array[j] = array2[m];	
}

// sort new array
	for(int k = 0; k < (length1 + length2); k++)
	{
		T temp = new_array[k];
		int y = k - 1;
	while(y >= 0 && new_array[y] > temp)
		{
			new_array[y+1] = new_array[y];
			y--; // – looks different in google docs 
		}
		new_array[y+1] = temp;
	}

	return new_array;
}

int main()
{
  int array1[] = {2, 6, 3, 4, 7};
  int array2[] = {7, 3, 9, 3, 5};

  int* new_array = merge_sort_array(array1, array2, 5, 5);

  for(int i = 0; i < 10; i++)
  {
    std::cout << new_array[i] << " ";
  }



  return 0;
}