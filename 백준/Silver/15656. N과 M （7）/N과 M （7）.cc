#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permutation(vector<int> &mainVec, vector<bool> &checkVec, vector<int>& numVec, int depth ,  int n, int r) {
    if (depth == r) {
        for (int i = 0; i < r; i++)
            cout << mainVec[i] << " ";
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        //if (!checkVec[i]) {
         //   checkVec[i] = true;
            mainVec[depth] = numVec[i];
            permutation(mainVec, checkVec, numVec , depth + 1  , n , r);
          //  checkVec[i] = false;
        //}
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m; 
    int temp;
    cin >> n >> m;

    vector<int> numVec;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        numVec.push_back(temp);
    }
    vector<int> mainVec(n, 0);
    vector<bool> checkVec(n+1,false);
    
    sort(numVec.begin(), numVec.end());
    permutation(mainVec, checkVec , numVec, 0 ,  n , m);
}
