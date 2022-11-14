//It20055080,D,M.P.U.Karunasekara, Group3.2

//This programme is for Genarate the summary report of sales

#include<stdio.h>

int main(void)

{	
	//file pointer
	FILE*companyData;

	//variable
	int idn[10];
	int car,jeep;
	int t;
	int v=0,l=0;

	//open file

	companyData=fopen("sale.dat","r");

	//check availability
	if(companyData==NULL)
	{
		printf("File cannot be open");
		return -1;
	}
	printf("ID     cars sold    jeeps sold     total income\n");

	//get data from file
	fscanf(companyData,"%s %d %d %d",idn,&car,&jeep,&t);
	while(!feof(companyData))
	{
		printf("%s      %d          %d           Rs:%d\n",idn,car,jeep,t);
		v=t+t;
		l=(car+jeep)+(car+jeep);
		fscanf(companyData,"%s %d %d %d",idn,&car,&jeep,&t);
	}
	
	//total outcomes
	printf("\n");
	printf("Total vehicals sold:%d\n",l);
	printf("\n");
	printf("Total income of this week:Rs:%d\n",v);
	
	//close the file
	fclose(companyData);
	return 0;
}
