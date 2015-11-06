
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>


struct Point {
  float xcoord;
  float ycoord;

};

  int main (){

    struct Point arr[10000];
    int i;
    for ( i=0;i<=9999; i++)
      {
	float x = ((float)rand()/(float)(RAND_MAX)) * 4;
	x-=2;
	float y = ((float)rand()/(float)(RAND_MAX)) * 4;
	y-=2;
	struct Point p;
	p.xcoord=x;
	p.ycoord=y;
	arr[i]= p;
      }
    int count=0;
    float temp=0;
    for (i=0;i<=9999;i++)
      {
	temp= arr[i].xcoord*arr[i].xcoord + arr[i].ycoord*arr[i].ycoord;
	temp=sqrt(temp);
	if (temp<2)
	  {
	    count++;
	  }
      }

    float ans = (float)count/10000;
    ans=ans*16;
    printf("%f\n",ans);
    return(0);

  }
