#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	char ch;
	fptr=fopen("C:\\Users\\Kamal Nain\\Downloads\\C_Batch_11_to_12-master\\14-File_handling\\program.txt","r");
	while(1)
	{
		ch=fgetc(fptr);
		if(ch==EOF)
		{
			break;
		}
			printf("%c",ch);
		
	}
	fclose(fptr);
	return 0;
}
		
		
