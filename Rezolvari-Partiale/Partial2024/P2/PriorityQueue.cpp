#include "PriorityQueue.h"

PriorityQueue::PriorityQueue(PriorityQueue & other)
{
	other.count = count;
	other.currentSize = currentSize;
	other.pq = new int[count];
	for (int i = 0; i < currentSize; i++)
		other.pq[i] = pq[i];
}

PriorityQueue::PriorityQueue(int _count)
{
	count = _count;
	currentSize = 0;
	pq = new int[count];
}

PriorityQueue::~PriorityQueue()
{
	count = currentSize = 0;
	delete[] pq;
}

PriorityQueue& PriorityQueue::operator+=(int x)
{
	if (currentSize < count)
		currentSize++;
	for (int i = currentSize - 1; i > 0; i--)
		pq[i] = pq[i - 1];
	pq[0] = x;

	for (int i = 0; i < currentSize - 1; i++)
		for (int j = i + 1; j < currentSize; j++)
			if (pq[i] < pq[j])
			{
				int aux = pq[i];
				pq[i] = pq[j];
				pq[j] = aux;
			}

	return (*this);
}

int PriorityQueue::Top()
{
	return pq[0];
}

int PriorityQueue::operator--(int)
{
	int val = Top();
	for (int i = 0; i < currentSize - 1; i++)
		pq[i] = pq[i + 1];
	pq[currentSize - 1] = 0;
	currentSize--;
	return val;
}

PriorityQueue::operator int()
{
	return currentSize;
}

int PriorityQueue::operator()(const char* fun)
{
	if (fun == "sum")
	{
		int s = 0;
		for (int i = 0; i < currentSize; i++)
			s += pq[i];
		return s;
	}
	else if (fun == "max")
	{
		return Top();
	}
	else if (fun == "min")
	{
		return pq[currentSize - 1];
	}
}
