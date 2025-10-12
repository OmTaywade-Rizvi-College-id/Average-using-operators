#include <stdio.h>
int main()
{
      // My Name
    printf( "Name :Om Satish Taywade \n");
    
    // My age
    printf("Age : 18 \n");
    
    // My Class
    printf("Class: FYCE \n");

    // My Division
    printf("Division: C \n");
    
    // My UIN
    printf("Uin: 251P027 \n");
    
    float phyics,chemistry,maths, sum;
    float average;
    printf("physics :");
    scanf("%f",&phyics);
    printf("chemistry :");
    scanf("%f",&chemistry);
    printf("math :");
    scanf("%f",&maths);
    sum = phyics + chemistry + maths;
    printf("sum =%f \n", sum);
    average =sum/3;
    printf("average =%f\n",average);

    if (average>=50){
  printf("You are Eligible");
      }
     else{
  printf("You are Not Eligible");
     }
    return 0;

}

