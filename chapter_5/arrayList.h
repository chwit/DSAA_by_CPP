

//  arrayList.h
//  git_DSAA_in_CPP
//
//  Created by user on 2019/4/13.
//  Copyright © 2019 user. All rights reserved.
//

#ifndef arrayList_h
#define arrayList_h

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;


class illegalParameterValue
{
public:
	illegalParameterValue() :
		message("Illegal parameter value"){}
	illegalParameterValue(string theMessage)
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

class illegalIndex
{
public:
	illegalIndex() :
		message("Illegal Index value"){}
	illegalIndex(string theMessage)
	{
		message = theMessage;
	}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};


template <class T>
class linearList {
    
public:
    //virtual linearList() {};
    virtual ~linearList() {};
    virtual bool empty() const = 0;
    virtual int size() const = 0;
    virtual T & at(int index) const = 0;
    virtual int indexOf(const T & theElement) const = 0;
    virtual void erase(int index) = 0;
    virtual void insert(int index,const T & theElement) = 0;
    virtual void output(std::ostream & out) const = 0;
};


template <class T>
class arrayList : public linearList<T>
{
public:
    arrayList(int initialCapacity = 10);
    arrayList(const arrayList<T> &);
    
    bool empty() const {return listSize == 0;}
    int size() const {return listSize;}
    T & at(int index) const;
    int indexOf(const T & theElement) const;
    void erase(int index);
    void insert(int index,const T & theElement);
    void output(std::ostream & out) const;
    
protected:
    void checkIndex(int theIndex) const;
    T * element;
    int arrayLen;   //数组的长度
    int listSize;   //数据的size
};


#endif /* arrayList_h */
