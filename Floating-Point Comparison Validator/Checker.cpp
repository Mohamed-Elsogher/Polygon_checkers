#include "testlib.h"
#include <cmath>

using namespace std;

const double EPS = 1e-6;

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);

    double expected = ans.readDouble();
    double actual = ouf.readDouble();

    if (fabs(expected - actual) > EPS)
        quitf(_wa, "Expected %.9f, but found %.9f", expected, actual);

    quitf(_ok, "Correct answer within precision %.9f", EPS);
}
