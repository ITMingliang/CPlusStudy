#include <iostream>
#include <stdlib.h>

using namespace std;

int main17() {

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		//´òÓ¡Êä³öÆæÊý
		cout << i << endl;
	}

	system("pause");

	return 0;

}