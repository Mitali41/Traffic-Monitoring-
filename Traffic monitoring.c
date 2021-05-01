#include <stdio.h>
#include <stdlib.h>

int main()
{

     printf("Select your vehicle.\nChoose 0 for Bike, 1 for Scooty, 2 for Car, and 3 for Truck.\n");
    int t1,t2;
    scanf("%d",&t1);
    if (t1==0)
    {
        printf("You chose Bike\n\n");
    }

    if (t1==1)
    {
        printf("You chose Scooty\n\n");
    }

    if (t1==2)
    {
        printf("You chose Car\n\n");
    }

    if (t1==3)
    {
        printf("You chose Truck\n\n");

    }


printf("Select your Origin.\nChoose 0 for VidyaVihar, 1 for Vasai\n");
    int r1,r2;
    scanf("%d",&r1);
    if (r1==0)
    {
        printf("You chose VidyaVihar\n\n");
    }

    if (r1==1)
    {
        printf("You chose Vasai\n\n");
    }
if (r1==0)
{
    printf("Select your Destination.\nChoose 0 for Bandra, 1 for Vashi, 2 for CST, 3 for Bhandup\n");
}

else{
    printf("Select your Destination.\nSelect 4 for VidyaVihar\n");
}

scanf("%d",&r2);
    if (r2==0)
    {
        printf("You chose Bandra\n");
    }

    if (r2==1)
    {
        printf("You chose Vashi\n");
    }

     if (r2==2)
    {
        printf("You chose CST\n");
    }
     if (r2==3)
    {
        printf("You chose Bhandup\n");
    }
     if (r2==4)
    {
        printf("You chose VidyaVihar\n");
    }

printf("Select your time of travel.\nChoose 0 for 7 to 11, 1 for 12 to 17, 2 for 18 to 22, 3 for 23, 4 for 0 to 5, and 5 for 6 .\n");
int d1,d2;
scanf("%d",&d1);
    if (d1==0)
    {
        printf("You chose 7 to 11\n");
    }

    if (d1==1)
    {
        printf("You chose 12 to 17\n");
    }

     if (d1==2)
    {
        printf("You chose 18 to 22\n");
    }
     if (d1==3)
    {
        printf("You chose 23\n");
    }
     if (d1==4)
    {
        printf("You chose 0 to 5\n");
    }
     if (d1==5)
    {
        printf("You chose 6\n");
    }

    //(vehicle),(route),t1,t2
    int time[4][11]={{35,35,30,50,40,26,30,45,68,10,14},
                     {38,36,32,53,44,29,33,48,71,12,16},
                     {40,45,40,55,50,32,40,59,77,17,19},
                     {39,42,36,54,48,31,36,55,73,15,15}
                    };


    //Destination,Origin,r1,r2

    int route[5][3]={{101,102,103},
                      {104,105},
                      {106,107},
                      {110,111},
                      {108,109}
                     };




//(routeno.,time of travel),d2,d1
    float diversion[11][6]={{1.5,1,1.6,1,0.8,1},
                           {2,1.5,2.2,1.5,0.9,1.2},
                           {3.5,3,3.6,3,0.9,1.5},
                           {2.5,2,2.6,2,0.6,1.2},
                           {3,2.5,3.2,2.5,0.5,1},
                           {2.5,2,2.6,2,0.9,1.2},
                           {1.5,1,1.6,1,0.8,1},
                           {2.3,1.9,2.5,1.9,0.7,1.1},
                           {1.8,1.3,1.9,1.3,0.9,1.1},
                           {2.6,2.2,2.8,2.2,0.5,1.3},
                           {2.5,2,2.7,2.1,0.5,1.1}
                            };
int i,j;

for(i=r2;i<r2+1;i++)
    {
    for(j=0;j<3;j++)
        {
        printf("%d",route[i][j]);
        printf("\n");
        }
        printf("\n");
    }


 int k,l;
 for(k=t1;k<t1+1;k++)
 {
     for(j=0;j<3;j++)
     {
         l = route[r2][j];
         if (l == 0) continue;
         printf("%d",time[k][l - 101]);
         printf("\n");
     }
 }

 int m, n, r = 0;
 float ans = -1;
for(m=d1;m<d1+1;m++)
{
    for(j=0;j<3;j++)
    {
        n = route[r2][j];
        if (n==0) continue;
        n -= 101;
        if (ans == -1) {
            ans = time[t1][n] * diversion[n][d1];
            r = n + 101;
        }
        else{
            if(ans > time[t1][n] * diversion[n][d1]){
                ans = time[t1][n] * diversion[n][d1];
                r = n + 101;
            }
        }
        printf("%f",diversion[n][m]);
        printf("\n");
    }
}

printf("%d\n", r);



    return 0;
}
