#include <stdio.h>
#include <math.h>


int main(){
	int primes[10001];
	int n = 1;
	for(int i = 3; i < 120000; i += 2){
		if(n <= 10000){
                   	int prime = 0;
                   	for(int j = floor(i/2); j > 1; j--){
                         if( i % j == 0 ){
                                 prime += 1; /* not prime, make it 1 so we add 0 if prime and if end is 0 then the number is prime*/
                         }
                         else{
                                 prime += 0;
                         }

                 }
                  if( prime == 0){
                         /*printf("%i \n",i);*/
			  primes[n] = i;
			  n += 1;
	 	
    }
		}
	}

printf("%i \n", primes[10000]);
return 0;

}
