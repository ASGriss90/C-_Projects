#include <iostream>
#include "dynamicArray.h"

using namespace std;

template<typename T>
dynamicArray<T>::dynamicArray() {
	currentSize = 0;
	maxSize = 5;
	aPrr = new T[maxSize];
}

template<typename T>
dynamicArray<T>::dynamicArray(int size) {
	currentSize = 0;
	maxSize = size;
	aPrr = new T[maxSize];
}

template<typename T>
dynamicArray<T>::dynamicArray(dynamicArray &obj) {
	currentSize = obj.currentSize;
	maxSize = obj.maxSize;
	aPrr = new T[maxSize];

	for (auto elem : obj->aPrr) {
		this->push_back(elem);
	}
}

template<typename T>
dynamicArray<T>::~dynamicArray() {
	delete aPrr;
}

template<typename T>
void dynamicArray<T>::grow() {
	maxSize = 10;
	aPrr = new T[maxSize];

	return aPrr;
}


// need to finish
template<typename T>
void dynamicArray<T>::isEmpty() {

		
}

template<typename T>
void dynamicArray<T>::capacity() {
	cout << maxSize;
}



template<typename T>
void dynamicArray<T>::clear() {
    for(int i = 0; i < sizeof(aPrr); ++i){
        aPrr[i] = 0;
    }
}


// need to finish
template<typename T>
T dynamicArray<T>:: at(int position) {
    std::cout<<"Please enter a postion to be located"<<endl;
    std::cin>>enter;
    
    for(int i = 0; i < sizeof(aPrr); ++i){
        if(i == enter)
            std::cout << aPrr[i] << '\n';
    }
}


template<typename T>
void dynamicArray<T>::print() {
	for (int i = 0; i < sizeof(aPrr); i++) {
        cout << aPrr[i]<<endl;

	}
}

