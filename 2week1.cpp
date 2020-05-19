#include<iostream>
using namespace std;


int main()
{

	int num;
	int length;

	std::cout << "--------별 찍기 시스템---------" << endl;
	std::cout << "만들고 싶은 모양을 선택해주세요." << endl;
	std::cout << "1. 직각삼각형" << endl;
	std::cout << "2. 정삼각형" << endl;
	std::cout << "3. 나비" << endl;
	std::cout << "4. 나가기" << endl;
	std::cin >> num;


	switch (num) {
	case 1:

		int i, j;    /* i: 가로라인 계산, j: 별갯수 계산 */
		int line;    /* 입력받을 수를 저장할 변수 */


		std::cout << "직각삼각형을 선택하셨습니다." << endl;
		std::cout << "행의 개수를 선택해주세요" << endl;
		std::cin >> line;



		for (i = 0; i < line; i++) /* 입력받은 수 만큼 가로라인 계산 */
		{
			for (j = 0; j <= i; j++) /* 별의 갯수를 라인수에 맞춰 출력 */
			{
				printf("*");
			}
			printf("\n");
		}

		break;



	case 2:
		int k;
		int l;

		std::cout << "정삼각형을 선택하셨습니다." << endl;
		std::cout << "행의 개수를 선택해주세요" << endl;
		std::cin >> length;

		for (k = 1; k <= length; k++) {
			for (l = 1; l <= length - k; l++)
				cout << " ";
			for (l = 1; l <= k * 2 - 1; l++)
				cout << "*";
			cout << "\n";
		}

		break;

	case 3:


		int a, b, c = 0;
		int count = 1;
		int arr[100][100] = { 0 };
		int num = 0;

		std::cout << "홀수를 입력해주세요 :";
		std::cin >> num;

		for (a = 0; a < num; a++, c++) {
			for (b = c; b < num - c; b++) {
				arr[b][a] = count++;
			}
		}


		for (a = num / 2 + 1, c = num / 2 - 1; a < num; a++, c--) {
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

		std::cout << "나가기를 선택하셨습니다." << endl;
		std::cout << "감사합니다." << endl;
		return 0;




		}

	}

