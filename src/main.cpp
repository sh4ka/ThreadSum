#include <boost/thread.hpp>
#include <iostream>
#include <cstdint>

uint64_t total = 0;

void calculateSum(int maxNumber, int start = 0)
{
	std::uint64_t localTotal = 0;
	int i = start;
	for (i; i <= maxNumber; i++) {
		localTotal += i;
	}

	total += localTotal;
}

int main()
{
	int number = 1'000'000'000;

	double cutPoint = number / 2.0;
	int lowerHalf = floor(cutPoint);

	calculateSum(lowerHalf, 0);
	boost::thread t1{calculateSum, number, lowerHalf + 1};
	t1.join();

	std::cout << "sum is " << total << std::endl;
}