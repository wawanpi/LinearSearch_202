#include <iostream>
using namespace std;

int arr[20];				//Array to be search
int n;						//Number of element in the array
int i;						//Index of array element

void input() 
{
	while (true)
	{
		cout << "Enter the number of elements in the Array = ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximium 20 elements. \n\n";
	}

	//Accept array elements
	cout << "\n===================== \n";
	cout << "Enter array elements \n";
	cout << "\n===================== \n";
	for (i = 0; i < n; i++ )
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch()
{

}

