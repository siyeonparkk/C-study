#include<iostream>
using namespace std;


int main()
{

	int num;
	int length;

	std::cout << "--------�� ��� �ý���---------" << endl;
	std::cout << "����� ���� ����� �������ּ���." << endl;
	std::cout << "1. �����ﰢ��" << endl;
	std::cout << "2. ���ﰢ��" << endl;
	std::cout << "3. ����" << endl;
	std::cout << "4. ������" << endl;
	std::cin >> num; 


	switch (num) {  
	case 1:

		int i, j;    // i: ���ζ��� ���, j: ������ ���
		int line;    // �Է¹��� ���� ������ ����


		std::cout << "�����ﰢ���� �����ϼ̽��ϴ�." << endl;
		std::cout << "���� ������ �������ּ���" << endl;
		std::cin >> line;



		for (i = 0; i < line; i++) // �Է¹��� �� ��ŭ ���ζ��� ���
		{
			for (j = 0; j <= i; j++) // ���� ������ ���μ��� ���� ���
			{
				printf("*");
			}
			printf("\n");
		}

		break;

	case 2:
		int k;
		int l;

		std::cout << "���ﰢ���� �����ϼ̽��ϴ�." << endl;
		std::cout << "���� ������ �������ּ���" << endl;
		std::cin >> length;

		for (k = 1; k <= length; k++) {
			for (l = 1; l <= length - k; l++) //���κ� �ϼ��� ���鰪�� ���� ��µȴ�.
				cout << " ";
			for (l = 1; l <= k * 2 - 1; l++)
				cout << "*"; //*�� Ȧ�� ������ŭ ��µǾ�� ���ﰢ���� �׷��� �� �ִ�.
			cout << "\n";
		}

		break;

	case 3:


		int a, b, c = 0;
		int count = 1;
		int arr[100][100] = { 0 }; //�迭�� �̿��Ͽ� �Է� �޴´�.
		int num = 0;

		std::cout << "Ȧ���� �Է����ּ��� :";
		std::cin >> num;

		for (a = 0; a < num; a++, c++) {
			for (b = c; b < num - c; b++) {
				arr[b][a] = count++;
			}
		}


		for (a = num / 2 + 1, c = num / 2 - 1; a < num; a++, c--) { //�߰����� ����� �����Ǹ�, ���� ������ �Ͼ�Ƿ� num/2�� �̿����־���Ѵ�.
			for (b = c; b < num - c; b++) {
				arr[b][a] = count++;
			}
		}

		for (a = 0; a < num + 3; a++) {
			for (b = 0; b < num + 3; b++) {
				if (arr[a][b] == 0)
					std::cout << " ";
				else
					std::cout << "*";
			}
			puts("");
		}

		break;


	case4:

		std::cout << "�����⸦ �����ϼ̽��ϴ�." << endl;
		std::cout << "�����մϴ�." << endl;
		return 0;




		}

	}

