#include"arrays.h"

void swap(int arr[], int index, int otherIndex)
{
	int t;
	t = arr[index]; 
	arr[index] = arr[otherIndex]; 
	arr[otherIndex] = t;
}

void sort(int arr[], int len, int asc)
{
	for (int suo = 0; suo < len - 1;suo++)
	{
		for (int bi = suo + 1;bi < len;bi++)
		{
			if (asc==ASC ? arr[suo] > arr[bi] : arr[suo] < arr[bi])
			{
				swap(arr, suo, bi);
			}
		}
	}
}
