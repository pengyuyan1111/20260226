#include <stdio.h>
int main06()
{
	FILE * from = fopen("D:\\2025desktop\\阳光电影dygod.org.哪吒之魔童闹海.2025.HD.1080P.国语中字.mkv","rb");
	FILE * to = fopen("d:\\myfile\\nznh.mkv","wb");
	unsigned char buffer[1024];
	int len;
	if ( from !=NULL && to!=NULL)
	{
		while ( (len=fread(buffer,sizeof(char), 1024,from)) >0    )
		{
			fwrite(buffer, sizeof(char), len, to);
		}
		fclose(from);
		fclose(to);
		from = to = NULL;
	}
	 
	return 0;
}