#include <stdio.h>
#include <math.h>

int triple(){
	int a,b;
        b  =  999;
        double  c;
	while(b > 0){
		c = (pow(b,2) +5*pow(10,5) - 1000*b)/(1000 -b);
		int floorc = (int) floor(c);
		if (c > 0){
			if (c == floorc){
				a = 1000 -b -c;
				if(a >0 && b >a){
					printf("%f %i %i \n", c,b,a);
					int product = a*b*c;
					printf("%i \n" ,product);
				}
			}
		}
		b --; 
	}
	return 0;
}

int main(){
	triple();
	return 0;
}
