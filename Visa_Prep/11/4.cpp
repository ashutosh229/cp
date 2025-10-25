// What is the area of square, when coordinates of rectangle shaped towers were given

// A: Given 4 points (x,y) unordered — check if they form a square and return area.
// If not a square, returns 0 (or you can signal invalid).
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll sqdist(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
    ll dx = a.first - b.first;
    ll dy = a.second - b.second;
    return dx * dx + dy * dy;
}

double area_of_square_from_4points(vector<pair<ll, ll>> pts)
{
    if (pts.size() != 4)
        return 0;
    vector<ll> dists;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            dists.push_back(sqdist(pts[i], pts[j]));
        }
    }
    sort(dists.begin(), dists.end());
    // For a square: first 4 equal (sides), last 2 equal (diagonals), sides>0, diag = 2*side
    if (dists[0] == 0)
        return 0; // overlapping points
    if (dists[0] == dists[1] && dists[1] == dists[2] && dists[2] == dists[3] && dists[4] == dists[5] && dists[4] == 2 * dists[0])
    {
        // area = side_length^2 where side_length^2 = dists[0]
        // Note: dists[0] is squared side length, so actual area = side^2 = dists[0]
        return (double)dists[0];
    }
    return 0;
}

int main()
{
    // Example usage: read 4 points
    vector<pair<ll, ll>> pts(4);
    for (int i = 0; i < 4; i++)
        cin >> pts[i].first >> pts[i].second;
    double areaSq = area_of_square_from_4points(pts);
    if (areaSq == 0)
        cout << "Not a square or invalid\n";
    else
        cout << "Area of square = " << fixed << setprecision(0) << areaSq << "\n";
    return 0;
}

// B: Given m axis-aligned rectangles (x1,y1,x2,y2), compute area of minimal axis-aligned square enclosing them.
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m;
    cin >> m; // number of rectangles (towers)
    // Each rectangle: x1 y1 x2 y2 (not necessarily ordered)
    ll minX = LLONG_MAX, minY = LLONG_MAX, maxX = LLONG_MIN, maxY = LLONG_MIN;
    for (int i = 0; i < m; i++)
    {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        ll lx = min(x1, x2), rx = max(x1, x2);
        ll by = min(y1, y2), ty = max(y1, y2);
        minX = min(minX, lx);
        minY = min(minY, by);
        maxX = max(maxX, rx);
        maxY = max(maxY, ty);
    }
    if (minX == LLONG_MAX)
    {
        cout << 0 << "\n";
        return 0;
    }
    long long width = maxX - minX;
    long long height = maxY - minY;
    long long side = max(width, height);
    // If you need to include border thickness or want integer ceiling for non-integer inputs adjust accordingly.
    cout << side * side << "\n";
    return 0;
}
