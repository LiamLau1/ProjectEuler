#include <stdio.h>
#include <math.h>

int main(){
	int max = 106000;
	int count = 0;
	/*long long runningtotal = 0;*/
	for(int i = 2; i < max; i++){
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
			count = count + 1;
			if(count == 10001){
				printf("%i %i \n", i, count);
			}
			}
		}


	return 0;

}
