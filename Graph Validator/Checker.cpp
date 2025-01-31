#include "testlib.h"
#include <set>

using namespace std;

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);

    int n = inf.readInt(); 
    int m = inf.readInt(); 

    set<pair<int, int>> edges;

    for (int i = 0; i < m; i++) {
        int u = ouf.readInt(1, n);
        int v = ouf.readInt(1, n);

        if (u == v)
            quitf(_wa, "Self-loops are not allowed: (%d, %d)", u, v);
        
        if (edges.count({min(u, v), max(u, v)}))
            quitf(_wa, "Duplicate edge found: (%d, %d)", u, v);
        
        edges.insert({min(u, v), max(u, v)});
    }

    quitf(_ok, "Valid graph output.");
}
