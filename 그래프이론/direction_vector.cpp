#include<bits/stdc++.h>
using namespace std;

//4방향(상,하,좌,우)
const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};
int main(){
    int y = 0, x= 0;
    for(int i=0;i<4;i++){
        int ny = y + dy[i];
        int nx = x + dx[i];
        cout << ny << " : " << nx << '\n';
    }
    return 0;
}