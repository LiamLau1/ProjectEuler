#include  <stdio.h>
#include  <math.h>

int  check(int  n){
        int  reverse,  digit;
        reverse  =  0;
        for(int  i  =  0;  i  <  6;  i++){
                digit  =  n/(int)pow(10,i)  %  10;
                reverse  =  reverse  +  digit*(int)pow(10,5-i);
        }
        if(reverse  ==  n){
                return  1;
        }
        else{
                return  0;
        }
}



int  main(){
        int  n1  =  999;
        int  n2  =  999;
        int  max_palindrome  =  0;
        while(n2>99){
                while(n1>99){
                        if(check(n1*n2)  ==  1){
                                if(n1*n2  >  max_palindrome){
                                        max_palindrome  =  n1  *  n2;
                                        printf("%i  %i  %i  \n",  max_palindrome,  n1,n2);
                                }

                        }
                        n1  --;
                        }
                n2--;
                n1  =  999;
                }


        return  0;
}
