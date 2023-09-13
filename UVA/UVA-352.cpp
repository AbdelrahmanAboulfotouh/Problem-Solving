
                /*                قُلْ إِنَّ صَلاتِي وَنُسُكِي وَمَحْيَايَ وَمَمَاتِي لِلَّهِ رَبِّ الْعَالَمِيَ                  */

#include <bits/stdc++.h>
using namespace std;
#define Aboulfotouh ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define maxint INT32_MAX
#define clear cin.ignore();
// BEFORE coding are you sure you understood the statement correctly?
// PLEASE do not forget to read the sample explanation carefully.
// WATCH out for overflows & RTs in general.
// TEST your idea or code on the corner cases.
// ANALYZE each idea you have thoroughly.

typedef vector<int> v;
typedef vector<v> adj;

int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};

void dfs(adj &image, int x, int y)
{
    image[x][y] = 0;
    // "Cells with adjacent sides on common vertices, which contain binary ones,
    // comprise one war eagle."
    for (int i = 0; i < 8; ++i)
    {
        int tx = x + dx[i];
        int ty = y + dy[i];

        if (tx < 0 || tx >= image.size() || ty < 0 || ty >= image.size())
            continue;

        if (image[tx][ty] == 1)
            dfs(image, tx, ty);
    }
}
//driver code:
int main()
{
    int Case = 1, n;
    while (cin >> n)
    {
        clear;

        string s;
        adj image(n, v(n));
        for (int x = 0; x < n; ++x)
        {
            getline(cin, s);
            for (int y = 0; y < n; ++y)
                image[x][y] = s[y] - '0';
        }
        // Use DFS to find connected components.
        int ans {0};
        for (int x = 0; x < n; ++x)
            for (int y = 0; y < n; ++y)
                if (image[x][y] == 1)
                {
                    ++ans;
                    dfs(image, x, y);
                }

        cout << "Image number "
             << Case++
             << " contains "
             << ans
             << " war eagles."
             << "\n";
    }
    return 0;
}
