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
			printf("������\n");
			break;
		case 1:
			printf("����\n");
			break;
		case 2:
			printf("����\n");
			break;
		case 3:
			printf("ǿ��\n");
			break;
		case 4:
			printf("С�ӱ�\n");
			break;
		case 5:
			printf("�Ϸ���\n");
			break;
	}
	system("pause");


	return 0;
}