#include<bits/stdc++.h>
using namespace std;
bool vis[10][50];
int coin[] = {5, 8, 11, 15, 18};
int dp[10][50];
int make;
int n=5;
int coinchange(int i,int amount){
    printf("call holo %d %d diye\n",i,amount);
    //base case
     if(amount==make)return 1;
    if(i>=n)return 0;


    //memorization
    if(vis[i][amount])return dp[i][amount];
    vis[i][amount]=true;

    //relation
    //optiona
    int optiona=0,optionb=0;
    optiona=coinchange(i+1,amount+coin[i]);
    optionb =coinchange(i+1,amount);

    return dp[i][amount]=optiona|optionb;



}


int main(){
    memset(vis,false,sizeof(vis));
  scanf("%d",&make);
  int ans=coinchange(0,0);
  if(ans)printf("somvob\n");
  else printf("naa\n");
}
