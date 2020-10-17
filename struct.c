#include<stdio.h>
struct student
{
     int roll;
     char name[20];
     int marks[5];
     int total;
     float percent;
}
stud[60];
int main()
{
    int i,j,n;
    struct student s;
    printf("Enter the number of Students : ");
    scanf("%d",&n);
    printf("Subject 1 = Maths \nSubject 2 = English\nSubject 3 = Hindi\nSubject 4 = Physics\nSubject 1 = Chemistry\n");
    for(i=0;i<n;i++)
    {
     	printf("\n");
        printf("Enter Details of Student %d ",i+1);
        printf("\nEnter Roll-No. : ");
        scanf("%d",&stud[i].roll);
        printf("Enter Name : ");
        scanf("%s",stud[i].name);
          
        for(j=0;j<5;j++)
        {
            printf("Enter Marks of Subject %d : \n",j+1);
            scanf("%d",&stud[i].marks[j]);
            stud[i].total=stud[i].total+stud[i].marks[j] ;
        	stud[i].percent=(float)((float)stud[i].marks[0]/(float)stud[i].total)*100;    
        }
          
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<5;j++)
        {
        	
            if (stud[i].percent > stud[j].percent)
            {
                s=stud[i];
                stud[i]=stud[j];
                stud[j]=s;
            }
        }
    }
    printf("SORTED MARKS : (According to Maths Mark)");
    printf("\n-----------------------------------\n");
    printf("\n ROLLNO     NAME  MATHS  \n");
    for(i=0;i<n;i++)
    {
    printf("\n  %d\t   %s\t   %.2f\t  ", stud[i].roll, stud[i].name, stud[i].percent);
    }
    return 0;
}

