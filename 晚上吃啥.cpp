#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i;
	srand((unsigned)time(NULL));
	i = rand()%6;
	switch(i)
	{
		case 0:
			printf("北方面\n");
			break;
		case 1:
			printf("云南\n");
			break;
		case 2:
			printf("烧腊\n");
			break;
		case 3:
			printf("强记\n");
			break;
		case 4:
			printf("小河边\n");
			break;
		case 5:
			printf("南方面\n");
			break;
	}
	system("pause");


	return 0;
}