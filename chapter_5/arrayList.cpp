#define _SCL_SECURE_NO_WARNINGS 
//  arrayList.cpp
//  git_DSAA_in_CPP
//
//  Created by user on 2019/4/13.
//  Copyright © 2019 user. All rights reserved.
//
#include "arrayList.h"



template <class T>
T & arrayList<T>::at(int index) const {
	checkIndex(index);
	return element[index];
}

template <class T>
arrayList<T>::arrayList(int initialCapacity = 10)
{
	if (initialCapacity < 1)
	{
		ostringstream s;
		s << "Initial capacity = " << initialCapacity << " Must be > 0";
		throw illegalParameterValue(s.str());
	}
	arrayLen = initialCapacity;
	element = new T[arrayLen];
	listSize = 0;
}

template <class T>
arrayList<T>::arrayList(const arrayList<T> & theList)
{
	arrarLen = theList.arrayLen;
	listSize = theList.listSize;
	element = new T[arrarLen];
	copy(theList.element, theList.element + listSize, element);
}
template <class T>
int arrayList<T>::indexOf(const T & theElement) const
{
	int theIndex = (int)(find(element, element + listSize, theElement) - element);
	if (theIndex == listSize)
		return -1;
	else
		return theIndex;
}

template <class T>
void arrayList<T>::erase(int index){
	//删除元素
	checkIndex(index);
	copy(element + index + 1, element + listSize, element + index);
	element[--listSize].~T();
}

template <class T>
void arrayList<T>::insert(int index, const T & theElement)
{
	//插入index可以是等于listSize 
	if (index < 0 || index > listSize)
	{
		ostringstream s;
		s << "index = " << index << " size = " << listSize;
		throw illegalIndex(s.str());
	}
	if (listSize == arrayLen)
	{
		//changeLength1D(element, arrayLen, 2 * arrayLen);
		T * temp = new T[arrayLen * 2];
		copy(element, element + index, temp);
		temp[index] = theElement;
		copy(element + index, element + listSize, temp + index + 1);
		delete [] element;
		element = temp;
		arrayLen *= 2;
		listSize++;
		return;
	}
	if (listSize)
		copy_backward(element + index, element + listSize, element + listSize + 1);
	element[index] = theElement;
	listSize++;
}
template <class T>
void arrayList<T>::output(std::ostream & out) const{
	copy(element, element + listSize, ostream_iterator<T>(out, " "));
}

//全局函数 没有用友元函数
template <class T>
ostream & operator<<(ostream & out, const arrayList<T> & x)
{
	x.output(out);
	return out;
}

template <class T>
void arrayList<T>::checkIndex(int theIndex) const
{
	if (theIndex < 0 || theIndex >= listSize)
	{
		ostringstream s;
		s << "index = " << theIndex << " size = " << listSize;
		throw illegalIndex(s.str());
	}
}

int main()
{
	arrayList<int> myarr(5);
	try
	{
		myarr.insert(0, 10);
		myarr.insert(0, 20);
		myarr.insert(0, 30);
		myarr.insert(0, 40);
		myarr.insert(0, 50);
		myarr.insert(0, 60);
		myarr.insert(0, 70);
		myarr.insert(0, 80);
		//myarr.erase(3);
		//myarr.erase(0);
		cout << myarr <<  endl;
		
	}
	catch (illegalIndex e)
	{
		e.outputMessage();

		//cout << " a" << e.outputMessage() <<  endl;
	}

	getchar();
    return 0;
}

