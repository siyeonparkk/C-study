#include<iostream>



using namespace std;











int main()



{



	int a;



	int num;



	int length;



	do {



		std::cout << "--------�� ��� �ý���---------" << endl;



		std::cout << "����� ���� ����� �������ּ���." << endl;



		std::cout << "1. �����ﰢ��" << endl;



		std::cout << "2. ���ﰢ��" << endl;



		std::cout << "3. ����" << endl;



		std::cout << "4. ������" << endl;



		std::cin >> num;











		switch (num) {



		case 1:







			int i, j, g;    // i,g: ���� ���, j: ������ ���



			int line;    // �Է¹��� ���� ������ ����











			std::cout << "�����ﰢ���� �����ϼ̽��ϴ�." << endl;



			std::cout << "���� ������ �������ּ���" << endl;



			std::cin >> line;



			cout << endl;
			cout << endl;




			for (i = 0; i < line; i++) //�ﰢ�� 1



			{



				for (j = 0; j <= i - 1; j++)



					cout << " ";



				for (g = 0; g < line - i; g++)



					cout << "*";





				cout << endl;





			}



			cout << endl;



			for (i = 0; i < line; i++) //�ﰢ�� 2



			{



				for (j = 0; j <= line - 1 - i; j++)



					cout << "*";



				for (g = 0; g <= i; g++)



					cout << " ";



				cout << endl;



			}





			for (i = 0; i < line; i++) //�ﰢ�� 3



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



			int odd;

			int h;



			cout << "���� �����ϼ̽��ϴ�." << endl;



			while (1) //���ѹݺ����̴�. Ȧ���� �Է����� ������ Ȧ���� �Է��� ������ �Ʒ��� ������ �ݺ��ϱ� ���� ����ߴ�.



			{



				cout << "Ȧ���� �Է����ּ���: ";



				cin >> odd;







				if (odd % 2 == 0) //Ȧ���� �Է¹޾ƾ� �Ѵ�.



					continue;



				else



					break;



			}





			for (i = 1; i < odd / 2 + 1; i++) //���� ��� ����� ���� �ݺ����� �� �κ����� ������� �Ѵ�. -1



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







			for (i = odd / 2; i > 0; i--) //ó���� �ۼ��� �ݺ����� �޸� i���� ���ҽ��� ������ ��Ī ����� �����Ѵ�.



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

				std::cout << "�����⸦ �����ϼ̽��ϴ�." << endl;



				std::cout << "�����մϴ�." << endl;



				return 0;

		}




	





		


	}






	

	while (num != 4); //4���� ������ �ʴ� �̻� ���� �ݺ����� ��ü�� ������ ������ �������

}