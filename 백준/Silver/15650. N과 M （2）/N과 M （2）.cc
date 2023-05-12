#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permutation(vector<int> &mainVec, vector<bool> &checkVec, int depth, int cnt , int n, int r) {
    if (depth == r) {
        for (int i = 0; i < r; i++)
            cout << mainVec[i] << " ";
        cout << '\n';
        return;
    }

    for (int i = cnt; i <= n; i++) {
        //if (!checkVec[i]) {
            //checkVec[i] = true;
            mainVec[depth] = i;
            permutation(mainVec, checkVec, depth + 1, i+1 , n , r);
            //checkVec[i] = false;
        //}
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m; 
    cin >> n >> m;

    vector<int> mainVec(n,0);
    vector<bool> checkVec(n+1,false);
    
    
    permutation(mainVec, checkVec , 0 , 1 ,  n , m);

  
}
