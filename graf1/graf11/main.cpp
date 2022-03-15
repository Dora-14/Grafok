#include <iostream>
#include <fstream>
using namespace std;
bool lehet(int graf[100][100], int x, int y){
   if(graf[x][y]==1){
    return true;
   }
  return false;
}
int main()
{
    ifstream in("input.txt");
    int graf[100][100], N;
    in >> N;
    for(int i=0; i<=N; i++){
        for(int j=0; j<=N; j++){
            in >> graf[i][j];
        }
    }
    int x, y;
    cout << "Add meg a csomopontokat";
    cin >> x >> y;
    if(lehet(graf, x, y)){
    cout << "Van ut a ket csomopont kozott";
    }else{
    cout<<"Nincs ut a ket csomopont kozott";
    }
    return 0;
}
