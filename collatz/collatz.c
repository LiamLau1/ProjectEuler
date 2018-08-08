#include<stdio.h>
#include<math.h>

int even(int n){
	if(n % 2 == 0){
		return 1;
	}
	else{
		return 0;
	}

}

int main(){
	int max = 0;
	int chain = 0;
	int j;
	for(int i = 1; i < 1000000; i++){
		 long k = i;
		while(k > 1){
			/*printf("%i \t", k);*/
			if(even(k) == 1){
				k = k/2;
				chain += 1;
			}
			else{
				k = 3*k + 1;
				chain += 1;
			}
		}
			if(k == 1){
				chain += 1;
				if(chain > max){
					max = chain;
					j = i;
				}
			}
		chain = 0;
	}
	printf(" %i \t %i \n", j, max);
	return 0;
}
