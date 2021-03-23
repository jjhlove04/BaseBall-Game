#include <iostream>
#include <time.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>

using namespace std;

void gotoXY(int x, int y)
{
	HANDLE hOut;
	COORD Cur;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(hOut, Cur);
}


int main()
{
	const int num = 20;
	int number[num] = { 0, };
	int count = 0;
	bool bSame;

	srand((unsigned)time(NULL));

	int sameNum = 0;


	for (int i = 0; i < num; i++)
	{
		bSame = false;
		do 
		{
			number[i] = rand() % 10 + 1;\
				if (i > 1)
				{
					for (int j = 0; j < i; j++)
					{
						if (number[i] == number[j])
						{
							sameNum++;
						}
					}

					if (sameNum > 1)
					{
						bSame = true;
					}
				}
		} while (bSame);
		
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << number[i+j] << " ";
		}
		cout << endl;
	}

	Sleep(3000);
	system("cls");
	for (int i = 0; i < num; i++)
	{
		gotoXY(i%5, i/5);
		cout << " * ";
	}

	int key = _getch();
	int selectNum = 0;
	int select = 0;
	

	while (true)
	{
		key = _getch();

		if (key == 49)
		{
			gotoXY(0, 0);
			cout << number[0];
			select[selectNum] = number[0];
			selectNum++;
		}
		else if (key == 50)
		{
			gotoXY(1, 0);
			cout << number[1];
			select[selectNum] = number[1];
			selectNum++;
		}

		if (selectNum == 2)
		{
			if (select[0] != select[1])
			{

			}
		}
	}
	
	return 0;
}
	/*for (int i = 0; i < 20; i++)
	{
		number[i] = rand() % 10 + 1;
		cout << number[i]<<" ";
		count++;
		if (count == 4)
		{
			cout << "\n";
			count = 0;
		}




	}*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//{
	/*cout << "------------------------------" << endl;
	cout << "-       숫자 맞추기 게임     -"<<endl;
	cout << "------------------------------" << endl;
	int number[5] = { 0, };
	int input = 0;
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		number[i] = rand() % 100 +1;
		cout << number[i] << endl;
		Sleep(1000);
	}

	system("cls");
	for (int a = 0; a < 5; a++) {
		cout << "보여준 숫자를 입력하세요 :";
		cin >> input;

		if (number[a] == input)
		{
			cout << "맞혔습니다. 다음 숫자를 입력하세요 :";


		}
		else
		{
			cout << "틀렸습니다. 게임을 종료합니다.";
			return 0;
		}
	}








*/
//}



//{//int answer[3] = { 0, };
//
//void showDisplay()
//{
//    std::cout << "-------------------" << std::endl;
//    std::cout << " 숫자야구" << std::endl;
//    std::cout << "-------------------" << std::endl;
//
//}
//
//void initNumber()
//{
//    answer[0] = rand() % 9 + 1;
//
//    do
//    {
//        answer[1] = rand() % 9 + 1;
//    } while (answer[0] == answer[1]);
//
//    do
//    {
//        answer[2] = rand() % 9 + 1;
//    } while (answer[0] == answer[2] || answer[1] == answer[2]);
//}
//int main()
//{
//    srand(time(NULL));
//    showDisplay();
//    initNumber();
//
//    int count = 1;
//    int input[3] = { 0, };
//
//    while (true)
//    {
//        int strike = 0, ball = 0;
//        std::cout << "숫자를 한자리씩 입력하세요 : ";
//        std::cin >> input[0] >> input[1] >> input[2];
//
//        for (int i = 0; i < 3; i++)
//        {
//            for (int j = 0; j < 3; j++)
//            {
//                if (answer[i] == input[j])
//                {
//                    if (i == j)
//                    {
//                        strike++;
//                    }
//                    else
//                    {
//                        ball++;
//                    }
//                }
//            }
//        }
//
//        std::cout << "당신이 입력한 숫자:" << input[0] << input[1] << input[2] << std::endl;
//
//        // 맨 마지막
//        if (strike == 0 && ball == 0)
//        {
//            // 아웃 
//            std::cout << "\n아웃!\n" << std::endl;
//        }
//        else
//        {
//            std::cout << "스트라이크 : " << strike << ", 볼 : " << ball << std::endl;
//        }
//
//        if (strike == 3)
//        {
//            // 성공
//            std::cout << "\n성공!" << std::endl;
//            std::cout << "당신은 " << count << "번만에 맞추셨습니다." << std::endl;
//            initNumber();
//            return 0;
//        }
//        else
//        {
//            count++;
//        }
//    }
//
//    return 0;
//}
//}





