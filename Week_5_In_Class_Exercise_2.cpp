#include <iostream>
#include <cmath>
using namespace std;

namespace OOPCourse {
	void log_calculation(int result) {
		cout << " LOG: Calculation performed, result is " << log(result) << endl;
	};

	namespace Math {
		int add_and_log(int a, int b) {
			OOPCourse::log_calculation(a+b);
		};
	}
}

int main() {
	OOPCourse::Math::add_and_log(15, 27);
	return 0;
}