//IT20055080, D.M.P.U.Karunasekara, Group3.2

#include<stdio.h>

int main(void)
{
	//file pointer
	FILE*companyData;
	
	//variables
	int idn[10];
	int i;
	int car,jeep;
	int t=0,c=0,j=0;

	//open file
	companyData=fopen("sale.dat","w");
	
	//check availability
	if(companyData==NULL)
	{
		printf("File cannot be open");
		return -1;
	}

	//user input
	for(i=0;i<4;i++)
	{
		printf("\nEnter ID number:");
		scanf("%s",idn);
		printf("Number of cars sold for week: ");
		scanf("%d",&car);
		printf("Number of jeeps sold for week: ");
		scanf("%d",&jeep);
		
		//calculatios
		c=1000*car;
		j=2500*jeep;
		t=j+c;
		printf("Total income is: %d",t);
		//store in the file
		fprintf(companyData,"%s %d %d %d\n",idn,car,jeep,t); 
	}
	
	//file close
	fclose(companyData);
	return 0;
}
