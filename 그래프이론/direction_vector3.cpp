#include<bits/stdc++.h>
using namespace std;
const int n = 3;
int a[n][n], visited[n][n];
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
int y=0,x=0;

void go(int y, int x){
    visited[y][x]=1;
    cout << y << " : " << x << "\n";
    for(int i=0;i<4;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || ny >=n || nx < 0 || nx >= n ) continue; // map 범위 넘어서면
        if(a[ny][nx]==0) continue; // 갈 수 없는 길이면
        if(visited[ny][nx]) continue; // 방문한 정점이면
        go(ny,nx);
 }
 return ;
}

int main(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    go(0,0);
}