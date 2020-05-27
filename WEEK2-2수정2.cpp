#include<iostream>



using namespace std;











int main()



{



	int a;



	int num;



	int length;



	do {



		std::cout << "--------별 찍기 시스템---------" << endl;



		std::cout << "만들고 싶은 모양을 선택해주세요." << endl;



		std::cout << "1. 직각삼각형" << endl;



		std::cout << "2. 정삼각형" << endl;



		std::cout << "3. 나비" << endl;



		std::cout << "4. 나가기" << endl;



		std::cin >> num;











		switch (num) {



		case 1:







			int i, j, g;    // i,g: 라인 계산, j: 별갯수 계산



			int line;    // 입력받을 수를 저장할 변수











			std::cout << "직각삼각형을 선택하셨습니다." << endl;



			std::cout << "행의 개수를 선택해주세요" << endl;



			std::cin >> line;



			cout << endl;
			cout << endl;




			for (i = 0; i < line; i++) //삼각형 1



			{



				for (j = 0; j <= i - 1; j++)



					cout << " ";



				for (g = 0; g < line - i; g++)



					cout << "*";





				cout << endl;





			}



			cout << endl;



			for (i = 0; i < line; i++) //삼각형 2



			{



				for (j = 0; j <= line - 1 - i; j++)



					cout << "*";



				for (g = 0; g <= i; g++)



					cout << " ";



				cout << endl;



			}





			for (i = 0; i < line; i++) //삼각형 3



			{



				for (j = 0; j < line - i; j++)



					cout << " ";



				for (g = 0; g <= i; g++)



					cout << "*";



				cout << endl;



			}







			break;







		case 2:



			int k;



			int l;







			std::cout << "정삼각형을 선택하셨습니다." << endl;



			std::cout << "행의 개수를 선택해주세요" << endl;



			std::cin >> length;







			for (k = 1; k <= length; k++) {



				for (l = 1; l <= length - k; l++) //윗부분 일수록 공백값이 많이 출력된다.



					cout << " ";



				for (l = 1; l <= k * 2 - 1; l++)



					cout << "*"; //*은 홀수 갯수만큼 출력되어야 정삼각형이 그려질 수 있다.



				cout << "\n";



			}







			break;







		case 3:



			int odd;

			int h;



			cout << "나비를 선택하셨습니다." << endl;



			while (1) //무한반복문이다. 홀수를 입력하지 않으면 홀수를 입력할 때까지 아래의 문장을 반복하기 위해 사용했다.



			{



				cout << "홀수를 입력해주세요: ";



				cin >> odd;







				if (odd % 2 == 0) //홀수만 입력받아야 한다.



					continue;



				else



					break;



			}





			for (i = 1; i < odd / 2 + 1; i++) //나비 모양 출력을 위해 반복문을 세 부분으로 나누어야 한다. -1



			{



				for (h = 1; h <= i; h++)



					cout << "*";







				for (h = 1; h <= odd - i * 2; h++)



					cout << " ";







				for (h = 1; h <= i; h++)



					cout << "*";







				cout << endl;



			}







			for (h = 1; h <= odd; h++)



				cout << "*";







			cout << endl;







			for (i = odd / 2; i > 0; i--) //처음에 작성한 반복문과 달리 i값을 감소시켜 나비의 대칭 모양을 구현한다.



			{



				for (h = 1; h <= i; h++)



					cout << "*";







				for (h = 1; h <= odd - i * 2; h++)



					cout << " ";







				for (h = 1; h <= i; h++)



					cout << "*";







				cout << endl;


			}


			break;




			case 4 :

				std::cout << "나가기를 선택하셨습니다." << endl;



				std::cout << "감사합니다." << endl;



				return 0;

		}




	





		


	}






	

	while (num != 4); //4번을 누르지 않는 이상 무한 반복으로 전체를 돌리는 것으로 재수정함

}