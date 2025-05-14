#include <iostream>
#include "Queue.h"
Queue::Queue() {
	queue;
	size = 1;

	Queue();
	Queue::~Queue() {
		if (queue != nullptr)
		{
			delete[] queue;
		}
	}
	void enqueue(int element) {
		if (isEmpty())
		{
			size = 1;
			queue = new int[size];
			queue[0] = element;
		}
		else
		{
			int* temp = new int[size + 1];
			for (int i = 0; i < size; i++)
			{
				temp[i] == queue[i];
			}

			temp[size] = element;
			size++;
			delete[] queue;
			queue = temp;
		}
	}
	int dequeue() {
		if (!isEmpty)
		{
			int first = queue[0];

			size--;
			int* temp = new int[size];

			for (int i = 0; i < size; i++)
			{
				temp[i] = queue[i + 1];
			}

			delete[] queue;
			queue = temp;

			return first;
		}
		return 0;
	}
	int Queue::peek() {
		if (!isEmpty())
		{
			return queue[0];
		}
		return
	}
	int getSize() {}
	bool isEmpty() {}
	string toString() {
		string s = "Queue is Empty.";

		if (!isEmpty())
		{
			s = " ";
			for (int i = 0; i < size; i++)
			{
				s += to_string(queue[i]) + " ";
			}
		}

		return s;
	}

}

