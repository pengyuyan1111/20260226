#include<stdio.h>
#include<conio.h>
#include<string.h>

char* getMark(char passWord[],int maxCount);
int main() {

	char user[20];
	char passWord[20];
	printf("ÕËºÅ£º");
	gets_s(user, 20);
	printf("ÃÜÂë£º");
	getMark(passWord,20);

	//ÑéÖ¤
	if (strcmp(user,"colin")==0
		&& strcmp(passWord,"123456789")==0){
		puts("ok");
	}
	else {
		puts("error");
	}

	return 0;

}
char* getMark(char passWord[], int maxCount)
{
	char pwd;
	int count = 0;
	do {
		pwd = _getch();
		if (pwd=='\b') {
			if (count>=1) {
				count--;
				putchar('\b');
				putchar(' ');
				putchar('\b');
			}
		}
		else if (pwd=='\r'||pwd=='\n') {
			putchar('\n');
			break;
		}
		else {
			passWord[count++] = pwd;
			putchar('*');
		}
		
	} while (count<maxCount-1);

	passWord[count] = '\0';

	return passWord;
}