//IT20055080,D.M.P.U.Karunasekara,group 3.2

//This programme is for store sales people data in file

#include<stdio.h>

int main(void)
{
	//variables
	int id[5];
	char name[30];
	int tel[10];
	char city[20];
	int i;

	//file pointer
	FILE*saleData;
	
	//Open the file
	saleData=fopen("person.dat","w");

	//check the availability
	if(saleData==NULL)
	{
		printf("File can not be open");
		return -1;
	}
	//user input data
	for(i=0;i<4;i++)
	{
		printf("\nEnter the sales ID:");
		scanf("%s",&id);
		printf("\nEnter the Sales person name:");
		scanf("%s",&name);
		printf("\nEnter the telephone number:");
		scanf("%s",&tel);
		printf("\nEnter the city work:");
		scanf("%s",&city);

		//Store data to file
		fprintf(saleData,"%s %s %s %s\n",id,name,tel,city);
	}
	
	//close the file
	fclose(saleData);
	return 0;
}
