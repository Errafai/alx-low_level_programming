#include "main.h"
int main()
{
	int i, s = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			s += i;
	}
	printf("%d\n", s);
}
