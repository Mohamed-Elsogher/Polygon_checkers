#include "testlib.h"
#include <vector>
#include <map>

using namespace std;

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);

    int n = inf.readInt();
    int m = inf.readInt(); 

    map<pair<int, int>, int> weight; 

    for (int i = 0; i < m; i++) {
        int u = inf.readInt();
        int v = inf.readInt();
        int w = inf.readInt();
        weight[{u, v}] = weight[{v, u}] = w;
    }

    int expected_cost = ans.readInt();
    int actual_cost = 0;

    vector<int> path;
    while (!ouf.seekEof())
        path.push_back(ouf.readInt(1, n));

    for (size_t i = 1; i < path.size(); i++) {
        int u = path[i - 1], v = path[i];

        if (!weight.count({u, v}))
            quitf(_wa, "Invalid path: (%d, %d) is not connected", u, v);

        actual_cost += weight[{u, v}];
    }

    if (actual_cost != expected_cost)
        quitf(_wa, "Expected cost %d but found %d", expected_cost, actual_cost);

    quitf(_ok, "Valid shortest path with cost %d", actual_cost);
}
