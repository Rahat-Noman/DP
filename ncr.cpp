#include<bits/stdc++.h>
using namespace std;
int dp[10][10];
bool vis[10][10];
int ncr(int n,int r){

    //base case
    if(n==r)return 1;
    if(r>n)return 0;
    if(r==1)return n;

    //memorization
    if(vis[n][r])return dp[n][r];

    //relations

    int optiona =ncr(n-1,r-1);//if i take this
    int optionb = ncr(n-1,r);//if i dont take this

    return dp[n][r]=optiona+optionb; //merging

}

int main(){

   int n,r;
   scanf("%d%d",&n,&r);
   cout<<ncr(n,r)<<endl;

}
