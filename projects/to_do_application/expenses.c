#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct{
	int id;
	char title[50];
	int amount;
}expense;



void createfile();
void add_data();
void read_data();
void update_data();
void delete_data();
void exit();


int main()
{
	int choice;
	while(1)
	{
		printf("\n ---- expense database menu -----");
		printf("\n1.create a file");
		printf("\n2.add expense record");
		printf("\n3.read all records");
		printf("\n4.update a record");
		printf("\n5.delete record");
		printf("\n6.exit");


		printf("\nenter your choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:createfile(); break;
			case 2:add_data(); break;
			case 3:read_data(); break;
			case 4:update_data(); break;
			case 5:delete_data(); break;
			case 6:printf("exiting...");
			       exit(0);
			  
			default :printf("invalid option");
		}
	}
}





void createfile()
{
	char filename[50];
	char content[255];
	printf("enter the file name (include .txt or .dat): ");
	scanf("%s",filename);
	getchar();

	FILE *fptr=fopen(filename,"wb");

	if(fptr==NULL){
		printf("could not create file \n");
	}

       
       printf("message do you want to save in '%s'",filename);
       fgets(content,sizeof(content),stdin);

       fprintf(fptr,"%s",content);
       fclose(fptr);

       printf("\n sucess! your file '%s' was created and saved.\n",filename);


}



void add_data()
{
	char filename[50];
	expense e;

	printf("enter filename to add to: ");
	scanf("%s",filename);

	FILE *fp=fopen(filename,"ab");
	if(fp==NULL){
		printf("error. file not found");
		return;
	}

	printf("enter ID: ");
	scanf("%d",&e.id);
	printf("enter title: ");
	scanf("%s",e.title);
	printf("enter amount: ");
	scanf("%d",&e.amount);

	fwrite(&e,sizeof(expense),1,fp);
	fclose(fp);
	printf("record added sucessfully!\n");
}




 void read_data()
{
        char filename[50];
        expense e;

        printf("enter filename to read: ");
        scanf("%s",filename);

        FILE *fp=fopen(filename,"rb");
        if(fp==NULL){
                printf("error. file not found");
                return;
        }

	printf("\n%-5s %-20s %-10s\n","ID","title","amount");
	printf("----------------------------------------------");

	while(fread(&e,sizeof(expense),1,fp)){
		  printf("\n%-5d %-20s %-10d\n",e.id,e.title,e.amount);
	}
	fclose(fp);
}

void update_data()
{
	char filename[50];
	expense e;
	int targetid,found=0;

	printf("enter filename: ");
	scanf("%s",filename);
	FILE *fp=fopen(filename,"rb+");

	printf("enter id to update:");
	scanf("%d",&targetid);

	while(fread(&e,sizeof(expense),1,fp)){
		if(e.id==targetid){
			printf("enter new amount: ");
			scanf("%d",&e.amount);

			fseek(fp,-sizeof(expense),SEEK_CUR);
			fwrite(&e,sizeof(expense),1,fp);
			found=1;break;
		}
	}
	fclose(fp);
	if(found) printf("updated sucessfully");
	else printf("id not found");
}



void delete_data()
{
	char filename[50];

	printf("enter file name to clear:");
	scanf("%s",filename);

	FILE *fp=fopen(filename,"wb");

	if(fp==NULL){
		printf("error could not find the file");
		return;
	}


	fclose(fp);
	printf("sucess! all data cleared");
}

