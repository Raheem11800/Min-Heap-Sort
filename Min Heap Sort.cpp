#include<iostream>
using namespace std;

void heapify(int a[], int size, int i)
{
	int largest = i;
	int left = 2 * i;
	int right = 2 * i + 1;

	if (left < size && a[left]>a[largest])
	{
		largest = left;
	}

	if (right < size && a[right]>a[largest])
	{
		largest = right;
	}

	if (largest != i)
	{
		swap(a[i], a[largest]);
		heapify(a, size, largest);
	}
}

void heapsort(int a[], int size)
{
	for (int i = size / 2 - 1; i >= 0; i--)
	{
		heapify(a, size, i);
	}

	for (int i = size - 1; i >= 0; i--)
	{
		swap(a[0], a[i]);
		cout << a[i] << "";
		cout << endl;
		heapify(a, i, 0);
	}
}

void print(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
}

void main()
{
	const int size = 4;
	int a[size] = { 1,4,3,2 };

	heapsort(a, size);

	cout << "sorted array: ";
	print(a, size);
}