#include <iostream>
#include <vector>

using namespace std;

/**
 *123124
 *
 */
class test
{
public:
	test();
	~test();
};

extern int print();

test::test()
{
	cout << "Construct " << endl;
	print();
}

test::~test()
{
	cout << "Demand" << endl;
	cout << "Hello" << endl;
	print();
}

int main()
{
	test T;
}

