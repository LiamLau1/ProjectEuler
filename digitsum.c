#include  <stdio.h>
#include  <math.h>

int count =0;
int countdigit(long double n)
{
    while(n > 1)
    {
        n = (n/10);
        ++count;

    }

    return count;
}

int main(){
	long double j = 21; 
	int N =	countdigit((long double)j);
	int  runningtotal,  digit;
        runningtotal  =  0;
        for(int  i  =  0;  i  < N;  i++){
                digit  =  fmod(j/(long double)pow(10,i),10);
                runningtotal  =  runningtotal +  digit;
        }
                printf("%i \n", runningtotal);
	  return 0;

}
