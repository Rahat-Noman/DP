#include<bits/stdc++.h>
using namespace std;
int p[1500],wt[1500],cap[200];
bool vis[1005][35];
int dp[1005][35];
int n;

int supersale1jon(int i,int w){
   //base case
   if(i==n)return 0;

   //memorization
   if(vis[i][w]!=false)return dp[i][w];
   vis[i][w]=true;

    //recursive relation
    if(wt[i]>w)return dp[i][w]=supersale1jon(i+1,w);//if not taken
    return dp[i][w]=max(p[i]+supersale1jon(i+1,w-wt[i]),supersale1jon(i+1,w));
}





int main(){


int t,i,j,g,ans=0;
scanf("%d",&t);
for(i=0;i<t;i++){
//       for(int k=0;k<1000;k++){
//              for(int l=0;l<30;l++){
//                vis[k][l]=false;
//
//              }
//            }
    memset(vis,false,sizeof(vis));
    scanf("%d",&n);
    for(j=0;j<n;j++){
            scanf("%d%d",&p[j],&wt[j]);

    }
    scanf("%d",&g);
    for(j=0;j<g;j++){
        scanf("%d",&cap[j]);
    }
    ans = 0;
    for(j=0;j<g;j++){
        ans+=supersale1jon(0,cap[j]);
        //cout<<ans<<" "<<j<<endl;
    }
    printf("%d\n",ans);

}

}
