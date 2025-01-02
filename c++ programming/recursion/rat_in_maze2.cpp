#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool isTrueFalse(int newx, int newy, int n, vector<vector<int> >& m, vector<vector<bool> >& visitedvector, vector<string>& ans, string& path) {
    if ((newx >= 0 && newx < n) && (newy >= 0 && newy < n) && !visitedvector[newx][newy] && m[newx][newy] == 1) {
        return true;
    }
    return false;
}

void solve(int x, int y, int n, vector<vector<int> >& m, vector<vector<bool> >& visitedvector, vector<string>& ans, string path) {
    if (x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return;
    }
    // Mark the cell as visited
    visitedvector[x][y] = true;

    // Move down
    if (isTrueFalse(x + 1, y, n, m, visitedvector, ans, path)) {
        solve(x + 1, y, n, m, visitedvector, ans, path + 'D');
    }

    // Move left
    if (isTrueFalse(x, y - 1, n, m, visitedvector, ans, path)) {
        solve(x, y - 1, n, m, visitedvector, ans, path + 'L');
    }

    // Move right
    if (isTrueFalse(x, y + 1, n, m, visitedvector, ans, path)) {
        solve(x, y + 1, n, m, visitedvector, ans, path + 'R');
    }

    // Move up
    if (isTrueFalse(x - 1, y, n, m, visitedvector, ans, path)) {
        solve(x - 1, y, n, m, visitedvector, ans, path + 'U');
    }

    // Unmark the cell as visited (backtrack)
    visitedvector[x][y] = false;
}

vector<string> findPath(vector<vector<int> >& m, int n) {
    vector<vector<bool> > visitedvector(n, vector<bool>(n, false));
    vector<string> ans;
    string path = "";
    if (m[0][0] == 0) {
        return ans;
    }
    solve(0, 0, n, m, visitedvector, ans, path);
    return ans;
}

int main() {
    vector<vector<int> > m = { {1, 0, 0, 0}, 
                              {1, 1, 0, 1}, 
                              {1, 1, 0, 0}, 
                              {0, 1, 1, 1} };
    int n = m.size();

    vector<string> paths = findPath(m, n);
    for (const string& path : paths) {
        cout << path << endl;
    }

    return 0;
}
