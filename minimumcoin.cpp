#include<bits/stdc++.h>
using namespace std;
int coins[]={9, 6, 5, 1};
int n=4;
bool vis[5][25];
int dp[5][25];
int make=3;

int minimum_coin(int i ,int amount){

    //base case
    if(amount==0)return 0;
   if(i>=n)return INT_MAX;

    //memorization
   if(vis[i][amount])return dp[i][amount];
   vis[i][amount]=true;

   //relation
   //ata na nile coin lagbe
   int optiona,optionb;

    optiona = minimum_coin(i+1,amount);

   if(amount-coins[i]>=0){ optionb = 1+minimum_coin(i,amount-coins[i]);}
   return dp[i][amount]=min(optiona,optionb);


}
int main(){
   memset(vis,false,sizeof(vis));
   int result =minimum_coin(0,make);
   printf("ans is %d\n",result);

}
