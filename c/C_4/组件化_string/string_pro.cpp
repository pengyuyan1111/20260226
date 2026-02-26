#include"string_pro.h"
#include<stdlib.h>
int contains(const char* str, const char* substr)
{
	return strstr(str, substr) != NULL;
}

int startsWith(const char* str, const char* substr)
{
	return strstr(str, substr)== str;
}

int endsWith(const char* str, const char* substr)
{
	/*const char* p = strstr(str, substr);
	return p==NULL? 0 : strlen(p) == strlen(substr) ;*/
	const char* p = str + (strlen(str) - strlen(substr));
	return strcmp(p, substr)==0;
}

int strIndexOf(const char* str, const char* substr)
{
	const char* p = strstr(str, substr);
	return p!=NULL? p- str :-1 ;
}

int charIndexOf(const char* str, char c)
{
	//把字符变字符串
	char t[2] = {c};
	return strIndexOf(str,t);
}
int strLastIndexOf(const char* str, const char* substr)
{
	const char* p = str;
	const char* q = NULL;
	while (p!=NULL)
	{
		p = strstr(p, substr);
		if (p != NULL) {
			q = p;
			p++;
		}
		else {
			break;
		}
		
	}

	return q==NULL? -1 :q- str;
}

int charLastIndexOf(const char* str, char c)
{
	/*for (int i=strlen(str)-1  ;i>=0 ; i--)
	{
		if (str[i]==c) {
			return i;
		}
	}
	return -1;*/
	char t[2] = {c};
	return strLastIndexOf(str, t);
}

int isEmpty(const char* str)
{
//	return strlen(str)==0;
	return str[0] == '\0';
}

char* trimAll(char* str)
{
	char* p = str;
	char* q = str;
	while ( *p!='\0')
	{
		if (*p!=' ')
		{
			*q = *p;
			q++;
		}
		p++;
	}
	*q = '\0';
	return str;
}

char* leftTrim(char* str)
{
	char* p = str;
	while ( *p==' ')
	{
		p++;
	}
	strcpy(str, p);
	return str;
}

char* rightTrim(char* str)
{
	char* p = str + strlen(str) - 1;
	while (*p==' ')
	{
		p--;
	}
	*(p + 1) = '\0';
	return str;
}

char* toUpperCase(char* str)
{
	for (int i=0 ; str[i];i++ )
	{
		if (str[i]>='a' && str[i]<='z')
		{
			str[i] -= 32;
		}
	}
	return str;
}
char* toLowerCase(char* str)
{
	for (char* p =str ; *p ;p++ )
	{
		if ( *p>='A' && *p<='Z')
		{
			*p += 32;
		}
	}
	return str;
}

int strcmpIgnorecase(const char* str1, const char* str2)
{
	//临时保留str1的内容 把复制品 变小写
//	char t1[strlen(str1)+1];
	char *t1= (char*)malloc(strlen(str1) + 1);
	strcpy(t1,str1);
	char* t2=(char*)malloc(strlen(str2)+1);
	memcpy(t2 ,str2, strlen(str2) + 1);
	//统一小写
	toLowerCase(t1);
	toLowerCase(t2);
	int r= strcmp(t1, t2);
	free(t1);
	free(t2);
	return r;
}

char* reserveStr(char* str)
{
	char t;
	for (  int i=0,j=strlen(str)-1; i<j; i++,j-- )
	{
		t = str[i];
		str[i] = str[j];
		str[j] = t;
	}
	return str;
}

char* repeat(char* d, const char* s, int n)
{
	d[0] = '\0';
	//strcat
	for (int i=1 ;i<=n ;i++ )
	{
		strcat(d,s);
	}
	return d;
}

char* substr(const char* s, int from, int to, char* d)
{
	const char* p = s + from;
	memcpy(d,p,to-from);
	d[to - from] = '\0';
	return d;
}

char* insert(char* str, const char* sub, int index)
{
	char* p = str + index;
	char* tmp = (char*)malloc(strlen(p)+1);
	strcpy(tmp, p);
	*p = '\0';
	strcat(str, sub);
	strcat(str, tmp);
	free(tmp);
	return str;
}

char* deleteCharAt(char* str, int index)
{
	char* p = str + index + 1;
	strcpy( p-1 ,p );
	return str;
}

char* deleteSubstr(char* str, int from, int to)
{
	char* p = str + to;
	char* q = str + from;
	strcpy(q,p);
	return str;
}

char* replace(char* str, int from, int to, const char* sub)
{
	deleteSubstr(str, from, to);
	insert(str,sub,from);
	return str;
}

char* replaceAll(char* str, const char* oldsub, const char* newsub)
{
	int subLen = strlen(oldsub);
	char* p = NULL;
	do
	{
		p=strstr(str, oldsub);
		if (p!=NULL)
		{
			int from = p - str;
			int to = from + subLen;
			replace(str, from, to, newsub);
		}
	} while (p!=NULL);
	return str;
}
