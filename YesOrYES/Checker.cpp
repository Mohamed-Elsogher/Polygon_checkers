#include "testlib.h"
#include <string>

using namespace std;

const string YES = "YES";
const string NO = "NO";

string toUpper(string s) {
    for (char &c : s)
        c = toupper(c);
    return s;
}
int main(int argc, char *argv[]) {
    setName((YES + " or " + NO + " (case insensitive)").c_str());
    registerTestlibCmd(argc, argv);
    string ja = toUpper(ans.readWord());
    string pa = toUpper(ouf.readWord());
    if (ja != YES && ja != NO)
        quitf(_fail, "Expected %s or %s in answer, but found: %s", YES.c_str(), NO.c_str(), compress(ja).c_str());
    if (pa != YES && pa != NO)
        quitf(_pe, "Expected %s or %s, but found: %s", YES.c_str(), NO.c_str(), compress(pa).c_str());

    if (ja != pa)
        quitf(_wa, "Expected %s, but found %s", compress(ja).c_str(), compress(pa).c_str());

    quitf(_ok, "Answer is correct: %s", ja.c_str());
}
