#include <iostream>
#include <vector>
// First tutorial!

int sum(std::vector<int>& vec)
{
	int sum = 0;
	for (auto elem : vec) // type deducing
		sum += elem;
	return sum;
}

int main()
{
	std::vector<int> vec = {1,2,3};
	int summ = sum(vec);
	std::cout << vec.at(1) << summ;
}
