#pragma once
#include <iostream>
#include <string>
using namespace std;
class ArrayList
{
private:
	int* array;
	int size;
public:
	ArrayList(int* arrayList, int size);
	~ArrayList();
	void add(int value);
	void add(int index, int value);
	void addAll(int* values, int size);
	void addAll(int index, int* values, int size);

	void remove(int index);
	void remove();

	int size();
	int get(int index);
	void set(int index, int value);
	void clear();
	bool isEmpty();

	string toString();
};

