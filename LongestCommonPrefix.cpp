#include <iostream>
#include <vector>

std::string findCommonPrefix(std::vector<std::string> strs)
{
	std::string prefix;
	char current;
	int i = 0;
	char prev;

	while (i < 200) {
		
		for (int j = 0; j < strs.size(); j++) {
			std::string s = strs.at(j);
			if (i >= s.length())
				return prefix;
			current = s.at(i);
			if (prev != current && j != 0)
				return prefix;
			prev = current;
		}
		prefix += current;
		i++;
	}
	return prefix;
}

int main()
{
	std::vector<std::string> test;
	test.push_back("doggedly");
	test.push_back("dog park");
	test.push_back("dog");
	test.push_back("doggy");
	std::cout << findCommonPrefix(test) << std::endl;
}