#include<stdio.h>
struct student
{
     int Roll;
     char Name[20];
     int Marks[10];
     int total;
     float percent;
}
stud[60];
int main()
{
    int c,d,n;
    struct student s;
    printf("Enter the number of Students : ");
    scanf("%d",&n);
    printf("Subject 1 = Maths \nSubject 2 = English\nSubject 3 = Hindi\nSubject 4 = Physics\nSubject 1 = Chemistry\n");
    for(c=0;c<n;c++)
    {
     	printf("\n");
        printf("Enter Details of Student %d ",i+1);
        printf("\nEnter Roll-No. : ");
        scanf("%d",&stud[c].Roll);
        printf("Enter Name : ");
        scanf("%s",stud[c].Name);
          
        for(d=0;d<5;d++)
        {
            printf("Enter Marks of Subject %d : \n",d+1);
            scanf("%d",&stud[c].Marks[d]);
            stud[c].total=stud[c].total+stud[c].Marks[d] ;
        	stud[i].percent=(float)((float)stud[c].Marks[0]/(float)stud[c].total)*100;    
        }
          
    }
    for(c=0;c<n;c++)
    {
        for(d=i+1;d<5;d++)
        {
        	
            if (stud[c].percent > stud[d].percent)
            {
                s=stud[c];
                stud[c]=stud[d];
                stud[d]=s;
            }
        }
    }
    printf("Sorted Marks (According to Maths Mark)");
    printf("\n-----------------------------------\n");
    printf("\n ROLLNO     NAME  MATHS  \n");
    for(c=0;c<n;c++)
    {
    printf("\n  %d\t   %s\t   %.2f\t  ", stud[c].Roll, stud[c].Name, stud[d].percent);
    }
    return 0;
}

