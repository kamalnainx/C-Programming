#include<stdio.h>
int main()
{	
	char sentence[100];
	FILE *fptr;
	// fptr=fopen("C:/Users/Kamal Nain/Downloads/C_Batch_11_to_12-master/14-File_handling/sample.txt","w");
	fptr=fopen("C:/Users/Kamal Nain/Downloads/C_Batch_11_to_12-master/14-File_handling/sample.txt","a");
	printf("enter the sentence:\n");
	gets(sentence);
	fprintf(fptr,"the sentence is :\t%s\n",sentence);
	fclose(fptr);
	return 0;
}
