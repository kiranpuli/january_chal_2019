#include<iostream>
//#include<vector>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n,bn,an;cin >> n >> bn >> an;
        //int barr[n],aarr[n],narr[n];
        int bi=0,ai=0,ni=0;
        int ln=an*bn;
        for(int i=0;i<n;i++){
            int temp;
            cin >> temp;
            if(temp%ln==0){
               // narr[++ni]=temp;
               ni++;
            }else if(temp%bn==0 && temp%ln!=0){
                if(temp%an==0){
                 //   narr[++ni]=temp;
                 ni++;
                }else{
                 //   barr[++bi]=temp;
                 bi++;
                }
            }else if(temp%an==0 && temp%ln!=0){
                if(temp%bn==0){
                //    narr[++ni]=temp;
                ni++;
                }else{
                //aarr[++ai]=temp;
                ai++;
                }
            }else{
                continue;
            }
        }
       int bob=1,alice=1;
        while(bob==1 && alice==1){
            // bob's turn
            if(ni>0){
                ni=0;
            }else if(ni==0 && bi>0){
                bi--;
            }else if(ni==0 && bi==0){
                bob=0;
                cout << "ALICE\n";
                break;
            }

            // alice's turn
            if(ni>0){
                ni=0;
            }else if(ni==0 && ai>0){
                ai--;
            }else if(ni==0 && ai==0){
                alice=0;
                cout << "BOB\n";
                break;
            }

        }
    }
    return 0;
}


