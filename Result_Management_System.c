#include<stdio.h>
#include<conio.h>
#include<string.h>

 void Teacher();
 void Student();
 

 void main()
{
    int choose;
    
    
        printf("\n*********Welcome to student result system****************  \n");
        printf("                         10th result                         \n");
        printf("*************************************************************\n");
        printf("|           1.Teacher             |          2.Student      |\n");
        printf("*************************************************************\n");
    do
    {    
        printf("Press 1 to chosse teacher input marks\n");
        printf("Press 2 to choose student show their maks\n");
        printf("Please choose : \n");
        scanf("%d", &choose);
        if (choose==2)
        {
            Student();
        }else if(choose ==1)
        {
            Teacher(choose);            
        } 
        else{
            printf("Invalid input");
        }
        printf("\n");
    } while (choose !=1);
}
void Teacher(){
    char id[20];
    char passwd[10];
    printf("Enter teachers ID number\n");
    scanf("%s",&id);
    printf("Enter password\n");
    scanf("%s",&passwd);
    
    
    
    //here odia teacher add their students mark;***************************************************************************
    if(strcmp(id,"101")==0){
        if(strcmp(passwd,"101")==0){
            printf("Enter Students mark\n");
            int choose;
            do{
               printf("Press 1 to chosse a student\n");
               printf("Press 2 to choose b student\n");
               printf("Press 3 to choose c student\n");
               printf("Press 4 to choose d student\n");
               printf("Press 5 to choose e student\n");
               printf("Please choose : ");
               scanf("%d",&choose);
			   int odia; 
                if(choose==1)
                {
                printf("enter odia mark\n");
                scanf("%d",&odia);
                  
                }else if(choose ==2)
                {
                printf("enter odia mark\n");
                scanf("%d",&odia);            
                }
                else if(choose ==3)
                {
                printf("enter odia mark\n");
                scanf("%d",&odia);            
                } 
                else if(choose ==4)
                {
                printf("enter odia mark\n");
                scanf("%d",&odia);            
                } 
                else if(choose ==5)
                {
                printf("enter odia mark\n");
                scanf("%d",&odia);            
                }  
                else{
                    if(choose>5){
                    	printf("Invalid student id\n");
                    	break;
					}
                }
                printf("\n");
            }while (choose<=5);
        }
    }
    
    
    
    
    
    // here math teacher add their students mark*******************************************************************************************
    if(strcmp(id,"102")==0){
        if(strcmp(passwd,"102")==0){
            printf("Enter Students mark\n");
            int choose;
            do{
               printf("Press 1 to chosse a student\n");
               printf("Press 2 to choose b student\n");
               printf("Press 3 to choose c student\n");
               printf("Press 4 to choose d student\n");
               printf("Press 5 to choose e student\n");
               printf("Please choose : ");
               scanf("%d",&choose);
			   int math; 
                if(choose==1)
                {
                printf("enter math mark\n");
                scanf("%d",&math);
                  
                }else if(choose ==2)
                {
                printf("enter math mark\n");
                scanf("%d",&math);            
                }
                else if(choose ==3)
                {
                printf("enter math mark\n");
                scanf("%d",&math);            
                } 
                else if(choose ==4)
                {
                printf("enter math mark\n");
                scanf("%d",&math);            
                } 
                else if(choose ==5)
                {
                printf("enter math mark\n");
                scanf("%d",&math);            
                }  
                else{
                    if(choose>5){
                    	printf("invalid student id\n");
					}
                }
                printf("\n");
            }while (choose !=1);
        }
    }
    
    
    
    
    //here english teacher add their mark********************************************************************************************
    else if(strcmp(id,"103")==0){
        if(strcmp(passwd,"103")==0){
            printf("Enter Students mark\n");
            int choose;
            do{
               printf("Press 1 to chosse a student\n");
               printf("Press 2 to choose b student\n");
               printf("Press 3 to choose c student\n");
               printf("Press 4 to choose d student\n");
               printf("Press 5 to choose e student\n");
               printf("Please choose : ");
               scanf("%d",&choose);
			   int eng; 
                if(choose==1)
                {
                printf("enter english mark\n");
                scanf("%d",&eng); 
                }else if(choose ==2)
                {
                printf("enter english mark\n");
                scanf("%d",&eng);            
                }
                else if(choose ==3)
                {
                printf("enter english mark\n");
                scanf("%d",&eng);            
                } 
                else if(choose ==4)
                {
                printf("enter english mark\n");
                scanf("%d",&eng);            
                } 
                else if(choose ==5)
                {
                printf("enter english mark\n");
                scanf("%d",&eng);            
                }  
                else{
                    if(choose>5){
                    	printf("Invalid student id\n");
					}
                }
                printf("\n");
            }while (choose !=1);
        }
    }
    
    
    

    
    // science teacher add their students marks;********************************************************************************
    else if(strcmp(id,"104")==0){
        if(strcmp(passwd,"104")==0){
            printf("Enter Students mark\n");
            int choose;
            do{
               printf("Press 1 to chosse a student\n");
               printf("Press 2 to choose b student\n");
               printf("Press 3 to choose c student\n");
               printf("Press 4 to choose d student\n");
               printf("Press 5 to choose e student\n");
               printf("Please choose : ");
               scanf("%d",&choose);
			   int sci; 
                if(choose==1)
                {
                printf("enter science mark\n");
                scanf("%d",&sci); 
                }else if(choose ==2)
                {
                printf("enter science mark\n");
                scanf("%d",&sci);            
                }
                else if(choose ==3)
                {
                printf("enter english mark\n");
                scanf("%d",&sci);            
                } 
                else if(choose ==4)
                {
                printf("enter science mark\n");
                scanf("%d",&sci);            
                } 
                else if(choose ==5)
                {
                printf("enter science mark\n");
                scanf("%d",&sci);            
                }  
                else{
                    if(choose>5){
                    	printf("Invalid student id\n");
					}
                }
                printf("\n");
            }while (choose !=1);
        }
    }
    
    
    
    
    
    // if teacher enter invali id and passwd*************************************************************************************
    else{
        printf("Invalid Teacher's ID\n");
    }
    // this while is used for teacher entry after wrong id;
  
  
  
  
  
  
  
}
void Student(){
    printf("Enter student marks only");
}