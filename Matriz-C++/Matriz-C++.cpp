#include <cstdl.b>
#include <iostream>
#define maxf 3
#define maxc 5
using namespace std;
int main(int argc, char* argv[])
{
	float a[maxf][maxc];
	int f, c;
	// Escribir el array
	for (f = 0; f < maxf; f++)
	{
		for (c = 0; c < maxc; c++) {
			cin >> a[f][c];
		}
	}
	//escribir el array
	for (f = 0; f < maxf; f++)
	{
		for (c = 0; c < maxc; c++) {
			cout << a[f][c];
			cout << endl;
		}
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}