/*
http://stackoverflow.com/questions/5008804/generating-random-integer-from-a-range#comment53488216_19728404
*/
#include <iostream>
#include <random>
int main(int argc, char *argv[]) {
	int min = 1, max = 10;	
	std::random_device rd;     
	std::mt19937 rng(rd());    
	std::uniform_int_distribution<int> uni(min,max); 
	auto random_integer = uni(rng);
	std::cout << random_integer;
   
}