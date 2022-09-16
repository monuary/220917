#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	char A[] = "hello";
	char a[50];

	strcpy(a, A);//a에 A를 붙임.
	printf("strlen : %d\n", strlen(a));//a의 글자수
	printf("strcmp : %d\n", strcmp(a, A));//a와 A가 같으면 0, a가 A보다 값이 크면(알파벳 순서와 길이) 1, 작으면 -1
	printf("original a : %s\n", a);
	strcat(a, A);//a의 뒤에 A를 붙임
	printf("strcat : %s\n", a);
	printf("strlen_strcat : %d\n", strlen(a));
	printf("strcmp_strcat : %d\n", strcmp(a, A));
	return 0;
}