#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	char A[] = "hello";
	char a[50];

	strcpy(a, A);//a�� A�� ����.
	printf("strlen : %d\n", strlen(a));//a�� ���ڼ�
	printf("strcmp : %d\n", strcmp(a, A));//a�� A�� ������ 0, a�� A���� ���� ũ��(���ĺ� ������ ����) 1, ������ -1
	printf("original a : %s\n", a);
	strcat(a, A);//a�� �ڿ� A�� ����
	printf("strcat : %s\n", a);
	printf("strlen_strcat : %d\n", strlen(a));
	printf("strcmp_strcat : %d\n", strcmp(a, A));
	return 0;
}