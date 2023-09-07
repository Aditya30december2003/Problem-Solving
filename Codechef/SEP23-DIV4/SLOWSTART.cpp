
#include <iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       int x,h,sum=0,times=0;
       cin>>x>>h;
       while(sum<h){
           if(times<5){
               sum=sum+x/2;
           }
           else{
               sum=sum+x;
           }
           times++;
       }
       cout<<times<<" ";
   }
    

    return 0;
}
