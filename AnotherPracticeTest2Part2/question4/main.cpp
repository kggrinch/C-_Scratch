template<class T>
void shift_left(T* array, int length) // 1 position left
{
	int k = 1; // one position
	
	// Reverse the first k elements 
	for(int low = 0, high = k - 1; low < high; low++, high--;)
	{
		T temp  = *(array + high);
		*(array + high) = *(array + low);
		*(array + low) = temp;
	}

	// Reverse the remaining
	for(int low = k, high = length - 1; low < high; low++, high–-;)
	{
		T temp = *(array + high);
		*(array + high) = *(array + low);
		*(array + low) = temp;
	}
	
	// Reverse the whole array
	for(int low = 0, high = length - 1; low < high; low++, high–-;)
	{
		T temp = *(array + high);
		*(array + high) = *(array + low);
		*(array + low) = temp;
	}
}
