#include <iostream>
#define MAX_NUMBER 30
#define MAX_VALUE 20
using namespace std;
unsigned int v[MAX_NUMBER];
void fill_array(unsigned int x[])
{
	for (int i{ 0 }; i < MAX_NUMBER; i++)
	{
		x [i] = rand() % 21;
	}
}
void print_array(unsigned int x[])
{
	for (int l{ 0 }; l < MAX_NUMBER; l++)
	{
		cout << x[l] << " ";
	}
}
int main()
{
	fill_array(v);
	print_array(v);
	return 0;
}