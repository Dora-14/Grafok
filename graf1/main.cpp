#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int v[100][100], n;
    int k=1;
    ifstream in("input.txt");
    in >> n;
    for(int i=0; i<n; i++){
    for(int j=0; j<n ;j++){
            in >> v[i][j];
       }
    }
    cout << " ";
    for(int i=1; i<n+1; i++){
        cout << i << " ";
    }
    cout << endl;
    for(int i=0; i<n; i++){
       cout << k << " ";
       for(int j=0; j<n ;j++){
            cout << v[i][j] << " ";
       }
       cout << endl;
       k++;
    }
    return 0;
}
