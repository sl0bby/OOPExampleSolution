#pragma once
#include <iostream>
using namespace std;
class Queue
{
private:
	int* queue;
	int size;
public:
	Queue();
	~Queue();
	void enqueue(int element);
	int dequeue();
	int peek();
	int getSize();
	bool isEmpty();
	string toString();
};

