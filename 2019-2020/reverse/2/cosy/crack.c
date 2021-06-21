#include <stdio.h>
#include <math.h>

int main()
{
	int a[22];
	char s1[22];
	
  	a[0] = 3089;
  	a[1] = 9659;
  	a[2] = 174;
  	a[3] = 9993;
  	a[4] = 3255;
  	a[5] = 9961;
  	a[6] = 5876;
  	a[7] = 8910;
  	a[8] = 6155;
  	a[9] = 9986;
  	a[10] = 4382;
  	a[11] = 7880;
  	a[12] = 1218;
  	a[13] = 8660;
  	a[14] = 3255;
  	a[15] = 8746;
  	a[16] = 6155;
  	a[17] = 9781;
  	a[18] = 4999;
  	a[19] = 9455;
  	a[20] = 1218;
  	a[21] = 7987;

  	for (int i = 0; i < 22; i++)
  	{ 
  		double val = (i % 2 == 0) ? asin(a[i] / 10000.0) : acos(a[i] / 10000.0);
  		val = val * 180.0 / 3.141;
  		int j = round(val);
  		
  		if (j >= 0 && j <= 25)
  			s1[i] = 97 + j;
  		else if (j >= 26 && j <= 35)
  			s1[i] = 22 + j;
  		else if (j == 36)
  			s1[i] = 123;
  		else if (j == 37)
  			s1[i] = 125;
  		else if (j == 38)
  			s1[i] = 95;
  	}

  	printf("%s\n", s1);

	return 0;
}