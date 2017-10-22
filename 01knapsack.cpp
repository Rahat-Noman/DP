#include<bits/stdc++.h>
using namespace std;
int wt[5]={1,7,4,3,4};
int v[5]={120,400,280,150,200};
int n=5;
int c=10;
int vis[5][5];
int dp[5][5];
int profit(int i ,int w){

   //base case
   if(i==n)return 0;

   //memorization
   if(vis[i][c]!=false)return dp[i][c];


    //recursive relation
    if(w+wt[i]>c)return profit(i+1,w);//if not taken
    return dp[i][c]=max(v[i]+profit(i+1,w+wt[i]),profit(i+1,w));//




}



int main(){



   int ans =profit(0,0);
   printf("ans is %d \n",ans);

}

