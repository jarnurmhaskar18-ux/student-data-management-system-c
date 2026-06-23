//STUDENT'S DATA MANAGEMENT SYSTEM//
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	printf("\t\t\t\t\t/=======STUDENT'S DATA=======/");
	printf("\n\n\n\n");
	printf("\t\t\t\t\tGogate Jogalekar college\n");
	printf("\t\t\t\t\tIT Department Student's Data\n");
	printf("\t\t\t\t\t==============================\n\n");
	printf("\t\t\t\t\tPress any key to continue:");
	getch();
    int choice0;
	do
	{
	system("cls");
	printf("\t\t\t\t\t=======Student Data Management=======\n");
	printf("\t\t\t\t\t*************************************\n");
	printf("\t\t\t\t\t1.Add student\n");//<done>
	printf("\t\t\t\t\t2.Show all students\n");//<done>
	printf("\t\t\t\t\t3.Remove student\n");//<function of removing>
	printf("\t\t\t\t\t4.Log out\n");//<done>
	printf("\t\t\t\t\t*************************************\n");
	int choice;
	printf("\t\t\t\t\tEnter the number of function you want to perform:");
	scanf("%d",&choice);
	if(choice>0 && choice<5)
	{
		switch(choice)
		{
			case 1:
				{
					system("cls");
					printf("\t\t\t\t\t=======Add Student=======\n");
					printf("\t\t\t\t\t***************************\n");
					printf("\t\t\t\t\t1.F.Y.BSc.IT\n");
					printf("\t\t\t\t\t2.S.Y.BSc.IT\n");
					printf("\t\t\t\t\t3.T.Y.BSc.IT\n");
					printf("\t\t\t\t\t***************************\n");
					printf("\t\t\t\t\tEnter in which class the student is to be added:");
					int choice2;
					scanf("%d",&choice2);
					if(choice2>0 && choice2<4)
					{
						system("cls");
					    if(choice2==1)
						{
							system("cls");
							printf("\t\t\t\t\t=======F.Y.BSc.IT=======\n");
							char rollno1[10];
							printf("\n\t\t\t\t\tRollno:");
							scanf("%s",&rollno1);
							char fname1[20];
							printf("\t\t\t\t\tFirst Name:");
							scanf("%s",&fname1);
							char lname1[20];
							printf("\t\t\t\t\tLast Name:");
							scanf("%s",&lname1);
							char gpa1[10];
							printf("\t\t\t\t\tGPA:");
							scanf("%s",&gpa1);
							FILE *fybscit;
							fybscit=fopen("fybscit.txt","a");
							fprintf(fybscit,"\t\t\t\t\t%s\t %s %s   \t F.Y.BSc.IT\t %s",rollno1,fname1,lname1,gpa1);
							fprintf(fybscit,"\n");
							fclose(fybscit);
							printf("\t\t\t\t\tStudent Added Successfully\n");
							printf("\t\t\t\t\t**************************\n");
							printf("\t\t\t\t\tDo you want to check the added student?:\n");
							printf("\t\t\t\t\tEnter 1 to check and 0 to exit:");
							int choicce1;
							scanf("%d",&choicce1);
							if(choicce1==1)
							{
								printf("\t\t\t\t\t=============F.Y.BSc.IT ALL STUDENTS=============\n");
								FILE *fybscit;
		                        fybscit=fopen("fybscit.txt","r");
		                        char fystring[100];
								while(fgets(fystring,100,fybscit))
								{
								printf("%s",fystring);
								}
		                        fclose(fybscit);
							}//1st if closed
							if(choicce1==0)
							{
							   exit(0);	
							}//2nd if closed		
						}//1st nested if closed
						if(choice2==2)
						{
							printf("\t\t\t\t\t=======S.Y.BSc.IT=======\n");
						    char rollno2[10];
							printf("\t\t\t\t\tRollno:");
							scanf("%s",&rollno2);
							char fname2[20];
							printf("\t\t\t\t\tFirst Name:");
							scanf("%s",&fname2);
							char lname2[20];
							printf("\t\t\t\t\tLast Name:");
							scanf("%s",&lname2);
							char gpa2[10];
							printf("\t\t\t\t\tGPA:");
							scanf("%s",&gpa2);
							FILE *sybscit;
							sybscit=fopen("sybscit.txt","a");
							fprintf(sybscit,"\t\t\t\t\t%s\t %s %s   \t S.Y.BSc.IT\t %s",rollno2,fname2,lname2,gpa2);
							fprintf(sybscit,"\n");
							fclose(sybscit);
							printf("\t\t\t\t\tStudent Added Successfully\n");
							printf("\t\t\t\t\t**************************\n");
							printf("\t\t\t\t\tDo you want to check the added student?:\n");
							printf("\t\t\t\t\tEnter 1 to check and 0 to exit:");
							int choicce2;
							scanf("%d",&choicce2);
							if(choicce2==1)
							{
								printf("\t\t\t\t\t=============S.Y.B.Sc.IT ALL STUDENTS=============\n");
								FILE *sybscit;
		                        sybscit=fopen("sybscit.txt","r");
		                        char systring[100];
								while(fgets(systring,100,sybscit))
								{
								printf("%s",systring);
								}
		                        fclose(sybscit);
							}//1st if closed
							if(choicce2==0)
							{
							   exit(0);	
							}//2nd if closed
						}//2nd nested if closed
						if(choice2==3)
						{
							printf("\t\t\t\t\t=======T.Y.BSc.IT=======\n");
							char rollno3[10];
							printf("\n\t\t\t\t\tRollno:");
							scanf("%s",&rollno3);
							char fname3[20];
							printf("\t\t\t\t\tFirst Name:");
							scanf("%s",&fname3);
							char lname3[20];
							printf("\t\t\t\t\tLast Name:");
							scanf("%s",&lname3);
							char gpa3[10];
							printf("\t\t\t\t\tGPA:");
							scanf("%s",&gpa3);
							FILE *tybscit;
							tybscit=fopen("tybscit.txt","a");
							fprintf(tybscit,"\t\t\t\t\t%s\t %s %s   \t T.Y.BSc.IT\t %s",rollno3,fname3,lname3,gpa3);
							fprintf(tybscit,"\n");
							fclose(tybscit);
							printf("\t\t\t\t\tStudent Added Successfully\n");
							printf("\t\t\t\t\t**************************\n");
							printf("\t\t\t\t\tDo you want to check the added student?:\n");
							printf("\t\t\t\t\tEnter 1 to check and 0 to exit:");
							int choicce3;
							scanf("%d",&choicce3);
							if(choicce3==1)
							{
								printf("\t\t\t\t\t=============T.Y.BSc.IT ALL STUDENTS=============\n");
								FILE *tybscit;
		                        tybscit=fopen("tybscit.txt","r");
		                        char tystring[100];
								while(fgets(tystring,100,tybscit))
								{
								printf("%s",tystring);
								}
		                        fclose(tybscit);
							}//1st if closed
							if(choicce3==0)
							{
							   exit(0);	
							}//2nd if closed	
						}//3rd nested if closed	
					}//if closed
					else
					{
						printf("\t\t\t\t\tPlease enter correct choice number:\n");
					}//else closed
				}//case1 closed
				break;
			case 2:
				{
					system("cls");
					printf("\t\t\t\t\t=======Show All Students=======\n");
					printf("\t\t\t\t\t*******************************\n");
					printf("\t\t\t\t\t1.F.Y.BSc.IT\n");
					printf("\t\t\t\t\t2.S.Y.BSc.IT\n");
					printf("\t\t\t\t\t3.T.Y.BSc.IT\n");
					printf("\t\t\t\t\t*******************************\n");
					int choice3;
					printf("\t\t\t\t\tEnter class:");
					scanf("%d",&choice3);
					if(choice3>0 && choice3<4)
					{
						system("cls");
						if(choice3==1)
						{
							system("cls");
							printf("\t\t\t\t\t====================F.Y.BSC.IT======================\n");
							FILE *fybscit;
		                        fybscit=fopen("fybscit.txt","r");
		                        char mystring[100];
								while(fgets(mystring,100,fybscit))
								{
								printf("%s",mystring);
								}
		                        fclose(fybscit);
						}//1st nested if closed
						if(choice3==2)
						{
							system("cls");
							printf("\t\t\t\t\t====================S.Y.BSC.IT======================\n");
							FILE *sybscit;
		                        sybscit=fopen("sybscit.txt","r");
		                        char systring[100];
								while(fgets(systring,100,sybscit))
								{
								printf("%s",systring);
								}
		                        fclose(sybscit);
						}//2nd nested if closed
						if(choice3==3)
						{
							system("cls");
							printf("\t\t\t\t\t====================T.Y.BSC.IT======================\n");
							FILE *tybscit;
		                        tybscit=fopen("tybscit.txt","r");
		                        char tystring[100];
								while(fgets(tystring,100,tybscit))
								{
								printf("%s",tystring);
								}
		                        fclose(tybscit);
						}//3rd nested if closed
					}//if closed
					else
					{
						printf("\t\t\t\t\tPlease enter correct class number:\n");
					}//else closed
				}//case2 closed
				break;
			case 3:
				{
					system("cls");
					printf("\t\t\t\t\t=======Remove Student=======\n");
					printf("\t\t\t\t\t****************************\n");
					printf("\t\t\t\t\t1.F.Y.BSc.IT\n");
					printf("\t\t\t\t\t2.S.Y.BSc.IT\n");
					printf("\t\t\t\t\t3.T.Y.BSc.IT\n");
					printf("\t\t\t\t\t****************************\n");
					int choice4;
					printf("\t\t\t\t\tEnter the class of student which is to be removed:");
					scanf("%d",&choice4);
					if(choice4>0 && choice4<4)
					{
						if(choice4==1)
						{
							system("cls");
							printf("\t\t\t\t\t=======F.Y.BSc.IT=======\n");
							printf("\t\t\t\t\t************************\n");
							FILE *fybscit;
		                        fybscit=fopen("fybscit.txt","r");
		                        char mystring[100];
								while(fgets(mystring,100,fybscit))
								{
								printf("%s",mystring);
								}
								fclose(fybscit);
		                    printf("\t\t\t\t\tEnter the rollno of student you want to remove:\n");
							int rollno01;
							printf("\n\t\t\t\t\tRollno:");
							scanf("%d",&rollno01);
							int temp=1;
								FILE *fybscitn;
								fybscit=fopen("fybscitn.txt","r");
		                        fybscitn=fopen("fybscitn.txt","a");
								char *ch;
                                ch =getc(fybscit);
    							while (ch != EOF)
    							{
        							ch = gets(fybscit);
        							if (ch == '\n')
            						temp++;
            						//except the line to be deleted
            						if (temp != rollno01)
            						{
               							 //copy all lines in file replica.c
                					putc(ch, fybscitn);
            						}
    							}
    							fclose(fybscit);
    							fclose(fybscitn);
    							remove(fybscit);
    							rename("fybscitn", fybscit);
    							printf("\n The contents of file after being modified are as follows:\n");
		                        fybscit=fopen("fybscit.txt","r");
		                        char mystring100[100];
								while(fgets(mystring100,100,fybscit))
								{
								printf("%s",mystring100);
								}
		                        fclose(fybscit);
						}
						//nested if closed
						if(choice4==2)
						{
							system("cls");
							printf("\t\t\t\t\t=======S.Y.BSc.IT=======\n");
							printf("\t\t\t\t\t************************\n");
							printf("\t\t\t\t\tEnter the data of student you want to remove:\n");
							char rollno02[10];
							printf("\n\t\t\t\t\tRollno:");
							scanf("%s",&rollno02);
							char fname02[20];
							printf("\t\t\t\t\tFirst Name:");
							scanf("%s",&fname02);
							char lname02[20];
							printf("\t\t\t\t\tLast Name:");
							scanf("%s",&lname02);
							char gpa02[10];
							printf("\t\t\t\t\tGPA:");
							scanf("%s",&gpa02);
						}//nested if closed
						if(choice4==3)
						{
							system("cls");
							printf("\t\t\t\t\t=======T.Y.BSc.IT=======\n");
							printf("\t\t\t\t\t************************\n");
							printf("\t\t\t\t\tEnter the data of student you want to remove:\n");
							char rollno03[10];
							printf("\n\t\t\t\t\tRollno:");
							scanf("%s",&rollno03);
							char fname03[20];
							printf("\t\t\t\t\tFirst Name:");
							scanf("%s",&fname03);
							char lname03[20];
							printf("\t\t\t\t\tLast Name:");
							scanf("%s",&lname03);
							char gpa03[10];
							printf("\t\t\t\t\tGPA:");
							scanf("%s",&gpa03);
						}//nested if closed
					}//if closed 
					else
					{
						printf("\t\t\t\t\tYou have entered wrong choice, Please enter correct choice.");
					}//else closed
				}//case5 closed
				break;
			case 4:
				{
					system("cls");
					exit(0);
				}//case4 closed
				break;
		}//switch case closed	
	}//main if closed
 //else
//	{
//		printf("You have entered wrong choice number, Please enter correct number.\n");
//	}//else closed
	printf("\n\t\t\t\tDo you want to continue, Please enter 1 to continue and enter 0 to exit:");
	scanf("%d",&choice0);
	}
	while(choice0==1);
	return 0;
	}//int main closed


