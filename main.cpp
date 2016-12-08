#include <iostream>
#include <vector>

class solution {
public:
    int minNumSquares(int n) {
	int minNum;
	if (n == 0)
	    minNum = 0;
	else {
	    std::vector<int> cands;
	    int i = 1;
	    while (i*i <= n) {
		cands.push_back(minNumSquares(n-i*i)+1);
		i++;
	    }
	    minNum = *std::min_element(cands.begin(), cands.end());
	}
	return minNum;
    }
};

int main() {
    int n = 13;

    solution soln;
    int minNum = soln.minNumSquares(n);
    std::cout << "The minimum number of perfect square numbers is:\n"
	      << minNum << std::endl;
}
