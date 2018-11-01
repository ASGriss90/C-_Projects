
#pragma once
template<typename T>

class dynamicArray {
public:
	// Member Methods
	dynamicArray();  //Simple Constructor
	dynamicArray(int size);
	dynamicArray(dynamicArray &obj); //Copy Constructor
	~dynamicArray();  //De-constructor

	//Member variables
	int currentSize;   // The current size of used elements
	int maxSize;       // Max number elements allowed
	T *aPrr;          // pointer to our array
    T enter;





	// TODO: define all these methods
	void isEmpty(); // Empty array
	void capacity(); // Show capacity of array
	void push_back(); // appends elements to the array
	T pop_back(); // Remove an element and return the value
	void grow(); // double the size of the array
	bool empty(); // Check if the array is empty or not
	void clear(); // Remove all elements
	T at(int position); // Return the value at a position
	void print(); // Print all elements to screen
	dynamicArray& operator=(const dynamicArray& rhs); // assignment operator

};

/* DYNAMICARRAY_H */
