
/*Add Two numbers using pass by value reference function
 which is void
*/

#include<bits/stdc++.h>
using namespace std;

void sum(int x, int y){
    int total = 0;
    total = x + y;
    cout<<total<<'\n';
}

int main(){

    int x, y;
    cin>>x>>y;
    sum(x,y);

    return 0;
}