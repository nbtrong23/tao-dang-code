#include<iostream>

using namespace std;
int ucln(int a, int b)
{
	for (int i =min(a,b);i > 0;i--)
	{
		if (a % i == 0 && b % i == 0)
			return i;
	}
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << ucln(a, b);
	return 0;

}