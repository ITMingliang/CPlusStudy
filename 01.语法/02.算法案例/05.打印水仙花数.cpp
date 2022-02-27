#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {


	int number = 100;

	do {
		int ge = number % 10;
		int shi = (number / 10) % 10;
		int bai = number / 100;

		int temp = ge * ge * ge + shi * shi * shi + bai * bai * bai;

		if (temp == number) {
			cout << "Ë®ÏÉ»¨Êı£º" << number << endl;
		}

		number++;

	} while (number < 1000);


	system("pause");

	return 0;

}