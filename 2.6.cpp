#include<stdio.h>
int ucln(int a, int b)
{
	if (a == 0 || b == 0) return a + b;
	/*l?p cho t?i khi a=b th� ucln c?a 2 s? l� s� v?a t�nh ???c
	  HI?U THEO C�CH KH�C L�: max(a,b)= max(a,b) - min(a,b) */
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}

	}
	return b;
}
int main()
{
	int a, b;
	printf("nhap vao so thu nhat: ");
	scanf_s("%d", &a);
	printf("nhap vao so thu hai: ");
	scanf_s("%d", &b);
	
	printf("ucln cua 2 so la:%d", ucln(a, b));
	return 0;

}