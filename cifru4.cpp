#include <fstream>
using namespace std;
int abs(int n)
{
	return n >= 0 ? n : n*(-1);
}
int main()
{
	ifstream f("cifru4.in");
	int a;
	f >> a;
	f.close();
	int aux, nc;
	for (nc = 0, aux = a; aux; nc++, aux /= 10);
	int x = 0, v[nc], n = 0;
	for (aux = a; aux; aux /= 10)
		if (aux % nc == 0) x++;
		else v[n++] = aux;
	int y = 0;
	for (int i = 0; i < n-1; i++)
		for (int j = i+1; j < n; j++)
			if (abs(v[i]-v[j]) % nc == 0)
				y++;
	ofstream g("cifru4.out");
	g << x + y;
	g.close();
	return 0;
}
