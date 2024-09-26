#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

struct Flypaper {
    int direction, x, y;
};

bool canEscape(int N, const vector<Flypaper>& flypapers) {
    vector<int> lower(N + 1, INT_MIN);
    vector<int> upper(N + 1, INT_MAX);

    for (const auto& fp : flypapers) {
        if (fp.direction == 0) { // 아래에서 위로
            lower[fp.x] = max(lower[fp.x], fp.y);
        } else { // 위에서 아래로
            upper[fp.x] = min(upper[fp.x], fp.y);
        }
    }

    vector<int> minY(N + 1, INT_MAX);
    vector<int> maxY(N + 1, INT_MIN);
    minY[0] = maxY[0] = 0;

    for (int x = 1; x <= N; ++x) {
        int prevMinY = minY[x-1];
        int prevMaxY = maxY[x-1];
        
        // 위로는 무제한, 아래로는 최대 1칸 이동
        minY[x] = max(prevMinY - 1, lower[x] + 1);
        maxY[x] = upper[x] - 1;

        if (minY[x] > maxY[x]) {
            return false;
        }
    }

    return minY[N] <= 0 && maxY[N] >= 0;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<Flypaper> flypapers(M);
    for (auto& fp : flypapers) {
        cin >> fp.direction >> fp.x >> fp.y;
    }

    cout << (canEscape(N, flypapers) ? "stay" : "adios") << endl;

    return 0;
}
