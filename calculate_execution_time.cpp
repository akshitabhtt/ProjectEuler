#include <iostream>
#include <chrono> 
using namespace std::chrono;

void calculate_execution_time(auto start, auto stop){
	auto duration = duration_cast<microseconds>(stop - start); 
	  
	// To get the value of duration use the count() 
	// member function on the duration object 
	std::cout << "Time taken by this program: "<<duration.count()<< "ms \n";
}