#include<stdio.h>
void main()
{
    //Variables
    int A[3][3];
    int i,j;
    int Zi,Zj;
 
    //Final Table
    int B[3][3];
    int k;
    for(i=0,k=1;i<3;i++)
        for(j=0;j<3;j++,k++)
            B[i][j]=k;
    B[2][2]=0;
 
    //Enter  The Elements
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);
    printf("\n--------------------------------------\n");
 
    //Print
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("| %d |",A[i][j]);
            if(A[i][j]==0)
            {
                Zi=i;
                Zj=j;
            }
 
        }
        printf("\n");
    }
    printf("\n--------------------------------------\n");
 
 
    while(1<2)
    {
 
        //Enter Move
        char move;
        printf("Enter move=");
        scanf(" %c",&move);
 
        //Cases
       
        //UP
        if(move=='w')
        {
            if(Zi-1<0)
                printf("Error Move \n");
            else
            {
                A[Zi][Zj]=A[Zi-1][Zj];
                A[Zi-1][Zj]=0;
                Zi=Zi-1;
            }
        }
       
        //DOWN
        else if(move=='s')
        {
            if(Zi+1>=3)
                printf("Error Move \n");
            else
            {
                A[Zi][Zj]=A[Zi+1][Zj];
                A[Zi+1][Zj]=0;
                Zi=Zi+1;
            }
        }
       
        //RIGHT
        else if(move=='d')
        {
            if(Zj+1>=3)
                printf("Error Move \n");
            else
            {
                A[Zi][Zj]=A[Zi][Zj+1];
                A[Zi][Zj+1]=0;
                Zj=Zj+1;
            }
        }
       
        //LEFT
        else if(move=='a')
        {
            if(Zj-1<0)
                printf("Error Move \n");
            else
            {
                A[Zi][Zj]=A[Zi][Zj-1];
                A[Zi][Zj-1]=0;
                Zj=Zj-1;
            }
        }
       
        else
            printf("Error Move \n");
 
        printf("\n--------------------------------------\n");
 
        //Print After Move
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                printf("| %d |",A[i][j]);
            printf("\n");
        }
        printf("\n--------------------------------------\n");
 
        //Check
        int check=1;
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                if(A[i][j]!=B[i][j])
                   check=0;
        if(check==1)
            break;
 
    }
 
    //End
    printf("\n--------------------------------------\n");
    printf("Game Over ..");
    printf("\n--------------------------------------\n");
 
}
