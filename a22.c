//IT20055080, D.M.P.U.Karunasekara,Group 3.2.

//This programme for read the person.dat file

#include<stdio.h>
int main(void)

{
	//file pointer
	FILE*saleData;

	//variable
	int id[5];
	char name[30];
	int tel[10];
	char city[20];
	
	//open file
	saleData=fopen("person.dat","r");

	//check availability
	if(saleData==NULL)
	{
		printf("File cannot open");
		return -1;
	}

	//read data from file
	fscanf(saleData,"%s %s %s %s",id,name,tel,city);
	while(!feof(saleData))
	{
		printf("%s %s %s %s\n",id,name,tel,city);
		fscanf(saleData,"%s %s %s %s",id,name,tel,city);
	}

	//close the file
	fclose(saleData);
	return 0;
}
