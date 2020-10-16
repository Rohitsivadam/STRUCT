#include<stdio.h>
struct studentlist
{
     int rollno;
     char sname[20];
     int marks[10];
     int total;
     float percent;
}
stud[60];
int main()
{
    int a,b,n;
    struct student s;
    printf("Enter the number of Students: ");
    scanf("%d",&n);
    printf("Subject 1 = Maths \nSubject 2 = English\nSubject 3 = Hindi\nSubject 4 = Physics\nSubject 1 = Chemistry\n");
    for(a=0;a<n;a++)
    {
     	printf("\n");
        printf("Enter Details of Student %d ",i+1);
        printf("\nEnter Roll-No: ");
        scanf("%d",&stud[a].rollno);
        printf("Enter Name: ");
        scanf("%s",stud[a].sname);
          
        for(b=0;b<5;b++)
        {
            printf("Enter Marks of Subject %d : \n",b+1);
            scanf("%d",&stud[a].marks[b]);
            stud[a].total=stud[a].total+stud[a].marks[b] ;
        	stud[a].percent=(float)((float)stud[a].marks[0]/(float)stud[a].total)*100;    
        }
          
    }
    for(a=0;a<n;a++)
    {
        for(b=a+1;b<5;b++)
        {
        	
            if (stud[a].percent > stud[b].percent)
            {
                s=stud[a];
                stud[a]=stud[b];
                stud[b]=s;
            }
        }
    }
    printf("Sorted Marks (According to Maths Mark)");
    printf("\n-----------------------------------\n");
    printf("\n ROLLNO     NAME  MATHS  \n");
    for(a=0;a<n;a++)
    {
    printf("\n  %d\t   %s\t   %.2f\t  ", stud[a].rollno, stud[a].sname, stud[a].percent);
    }
    return 0;
}

