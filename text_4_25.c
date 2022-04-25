#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void zhanbian1(char* arr, int k)
{
	int sz = strlen(arr);
	int i = 0;
	for (i = 0; i < k; i++)
	{
		int a = *arr;
		int j = 0;
		for (j = 0; j < sz-1; j++)
		{
			*(arr+j) = *(arr +j+1);
		}
		*(arr + sz - 1) = a;
	}
}
void resesr(char* arr1, char* arr2)
{
	while (arr1 < arr2)
	{
		char  map = *arr1;
		*arr1 = *arr2;
		*arr2 = map;
		arr1++;
		arr2--;
	}
}
void zhanbian(char* arr, int k)
{
	int sz = strlen(arr);
	resesr(arr, arr + k - 1);
	resesr(arr + k, arr + sz - 1);
	resesr(arr, arr + sz - 1);
}
int main()
{
	char arr[] = "abcdef";
	//zhanbian(arr, 2);
	zhanbian1(arr, 2);
	printf("%s\n", arr);
	return 0;
}