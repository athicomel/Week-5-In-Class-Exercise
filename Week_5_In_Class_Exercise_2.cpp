#include <iostream>

using namespace std;

namespace {
	void log_calculation(int result) {
		cout << " LOG: Calculation performed, result is " << result << endl;
	};
}
namespace OOPCourse {

	namespace Math {
		int add_and_log(int a, int b) {
			log_calculation(a + b);
			return a + b;
		};
	}
}

int main() {
	OOPCourse::Math::add_and_log;
	add_and_log(15, 27);
	return 0;
}