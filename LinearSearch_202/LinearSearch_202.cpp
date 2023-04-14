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
	char ch;
	int comparisson;			////Number of Comparrison

	do
	{
		//Accept the number to be searched
		cout << "\nEnter the element you want to search : ";		//Langkah1
		int item;
		cin >> item;

		comparisson = 0;
		for (i = 0; i < n; i++)					 //Langkah 2,3,4
		{
			comparisson++;
			if (arr[i] == item)                                     //Langkah 5a found
			{
				cout << "\n" << item << " Found at Position " << (i + 1) << endl;
				break;
			}
		}
		if (i == n)								//Langkah 5b not found

			cout << "\n" << item << "Not Found in the Array\n";
			cout << "\nNumber of comparisson : " << comparisson << endl;

			cout << "\nContinue Search (y/n) ? ";
			cin >> ch;
		} while ((ch == 'y') || (ch == 'Y'));
	}

int main()
{
	input();
	LinearSearch();
	
	
}