#include<bits/stdc++.h>
using namespace std;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int m,n,y,x,ret,ny,nx;
int a[104][104];
bool visited[104][104];

int DFS(int y, int x){
    visited[y][x] = 1;
    for(int i=0;i<n;i++){
        int ny = y + dy[i];
        int nx = x + dx[i]; 
        if(ny < 0 || nx < 0 || ny >=n || nx >= m) continue;
        if(a[ny][nx] == 1 && !visited[ny][nx]){
            DFS(ny,nx);
        }

    }
    return 0;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == 1 && !visited[i][j]){
                ret++; DFS(i,j);
            }
        }
    }
    cout << ret << "\n";
    return 0;
}
