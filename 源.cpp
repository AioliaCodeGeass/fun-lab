#include <iostream>
using namespace std;

int main()
{
	int a, b;
	for (a = 1; a < 10; a++)
	{
		for (b = 1; b < a+1; b++)
		{
			int c = b * a;
			cout << b << "*" << a <<"="<<c << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
