#include <stdio.h>

int gcd(int a, int b){
	/*performs the euclidean algorithm on two integers a and b 
	  and returns their greatest common divisor */
	int r;
	if(a>=b){
		r = a%b;
		if(r==0){
			return b;
		}
		else{
			return gcd(b, a%b);
		}
	}
	else{
		return gcd(b,a);
		}
		
	}


void selection_sort(int A[], int n){
	/*sorts an array of size n into ascending order*/
	int greatest_element = A[0];
	int position = 0;
	int i;
	for(i=n-1; i>0; i--){
		if(A[i]>greatest_element){
			greatest_element = A[i];
			position = i;
		}
	}
	A[position] = A[n-1];
	A[n-1] = greatest_element;
	if(n==1){
		
	}
	else{
	selection_sort(A, n-1);
	}
	
}

void print_int_array(int A[], int n){
	/*prints all the integers in an array of size n*/
    int i=0;
    while(i<n){
        printf("%d\n", A[i]);
        i++;
    }
    
}
	
int main(){
	
	printf("%d\n", gcd(20,25));
	printf("%d\n", gcd(88,11));
	
	int x[10] = {1,2,3,4,5,6,7,8,9,10};
    int y[10] = {3,5,8,9,21,4,6,9,5,3};
    selection_sort(x,10);
    selection_sort(y,10);
    print_int_array(x,10);
    printf("===========================\n");
    print_int_array(y,10);
	return 0;
}