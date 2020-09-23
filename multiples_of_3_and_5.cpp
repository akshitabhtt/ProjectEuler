/*If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.*/
#include <iostream>
#include "calculate_execution_time.cpp"

  
int multiples_of_3_and_5(){
	int sum = 0;
	for(int i = 1; i<1001; i++){
		if(i%3 == 0 or i%5 == 0){
			sum = sum + i;
		}
	}
	return sum;
}


int main(){
	
	auto start = high_resolution_clock::now();

	std::cout<<"Output: "<<multiples_of_3_and_5()<<"\n";

	auto stop = high_resolution_clock::now();

	calculate_execution_time(start,stop);
}