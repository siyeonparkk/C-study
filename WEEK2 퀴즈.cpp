#include <iostream>



using namespace std;



int main()

{

	int i, j;



	for (i = 0; i < 5; i++)

	{

		for (j = 0; j <= i; j++) // k가 0부터 i와 같아질 때까지

		{

			cout << "*"; // * 출력

		}

		cout << endl; 
	}
}