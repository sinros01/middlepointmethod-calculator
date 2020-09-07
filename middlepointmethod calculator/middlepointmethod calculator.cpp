#include <iostream>
#include <ctgmath>

using namespace std;
template <class A>

void middlepointmethod(A x, A &Value){
	auto const one = static_cast<A>(1);
	Value = (one / x) * log(one + x);
}

int main() {
	double CurrentValue = 0.0;
	cout.precision(20);
	for (int i = 1; i <= 20; i++) {
		middlepointmethod(pow(10.0, -i), CurrentValue);
		cout << CurrentValue << "i=" << i << endl;
	}
}
