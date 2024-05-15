/*Add Two numbers using pass by value reference function
 which return integer
*/
#include<bits/stdc++.h>
using namespace std;

int sum(int x,int y){
    int total = x+y;
    return total;
}

int main(){

    int x,y;
    cin>>x>>y;
    cout<<sum(x,y)<<'\n';

    return 0;
}