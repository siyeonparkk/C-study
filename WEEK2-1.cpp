#include <iostream>
using namespace std;

int main()

{

	int arr[5];//���ڸ� 5�� �Է¹޴´�
	int num1 = 0;//Ȧ�� ����
	int num2 = 0;//¦�� ����


	for (int i = 0; i < 5; i++)

	{
		cout << "���ڸ� �Է����ּ���:";
		cin >> arr[i];//�Է��� �迭�� �޴´�.

	}
	cout << endl;
	cout << "-----------���------------" << endl;
	cout << "Ȧ��: ";

	for (int i = 0; i < 5; i++)

	{
		if (arr[i] % 2 == 1)//arr�ȿ� Ȧ���� ���� ���

		{

			cout << arr[i] << " "; //" "�� ����ؼ� ���� �����
			num1++; //Ȧ�� ����

		}
	}

	cout << "\nȦ���� �� " << num1 << "�� �Դϴ�." << endl;
	cout << "¦��: ";

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] % 2 ==0 )//arr�ȿ� ¦���� �������

		{

			cout << arr[i] << " "; //" "�� ����ؼ� ���� �����
			num2++;//¦�� ����

		}

	}

	cout << "\n¦���� �� " << num2 << "�� �Դϴ�." << endl;





}