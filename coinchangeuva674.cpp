#include<bits/stdc++.h>
using namespace std;
int n=5;
int make;
int coin[5]={50,25,10,5,1};
int dp[5][7500];
bool vis[5][7500];

int koyvabe(int i,int amount){
   // printf("\n%d %d diye call\n ",i,amount);
   //base case
   if(amount==0)return 1;
   if(i>=n || amount<0 )return 0;


   //memorization
    if(vis[i][amount])return dp[i][amount];
    vis[i][amount]=true;


    //
    int optiona = koyvabe(i,amount-coin[i]);
    int optionb = koyvabe(i+1,amount);

    return dp[i][amount]=optiona+optionb;
}


int main(){
   while(cin>>make){

    memset(vis,false,sizeof(vis));
    cout<<koyvabe(0,make)<<endl;
   }

//    cin>>make;
//    memset(vis,false,sizeof(vis));
//   cout<<koyvabe(0,make)<<endl;


}
