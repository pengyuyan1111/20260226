#include <stdio.h>
#include"arrays.h"
int main ()
{
	int arr[] = {8,3,6,7,1,5,4,1,5,7,10,51,49};
	int len =  ARRAY_SIZE(arr);
	swap(arr, 1, 2);
	sort(arr, len,ASC);
	for (int i=0 ;i< len; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}