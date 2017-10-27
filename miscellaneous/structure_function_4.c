#include <stdio.h>
#include <stdlib.h>

struct weather {
	char day[10];
	float temp;
};

int main()
{
	int i,j;
	struct weather thisweek[7] = {{"Sat",80},{"Sun",50},{"Mon",60},{"Tue",90},{"Wed",40},{"Thurs",75},{"Friday",65}};
	struct weather temp;
	puts("Here is the intial array of structure: \n");
	for(i=0;i<7;i++)
	{
	 printf("%s, %.1f \n",thisweek[i].day, thisweek[i].temp);
	}
	
	puts("Here is the sorted array based on temperature:");
	for(i=0;i<7;i++)
	{
	 for(j=i+1;j<7;j++)
	  {
	   if( thisweek[i].temp > thisweek[j].temp )
		{
		temp = thisweek[i];
		thisweek[i]=thisweek[j];
		thisweek[j]=temp;
	 	}
         }	
	}
        for(i=0;i<7;i++)
        {
         printf("%s, %.1f \n",thisweek[i].day, thisweek[i].temp);
        }

	return(0);

}

