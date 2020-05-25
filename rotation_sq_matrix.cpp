/*
    @uthor: Amit Kumar
    user --> GitHub: drviruses ; CodeChef: dr_virus_ ; Codeforces,AtCoder,Hackerearth,Hakerrank: dr_virus;
*/
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
//#define ln mp::cpp_int;
#define ll    long long
#define ld    long double
#define ull   unsigned long long
#define endl "\n"
ll google_itr = 1;
#define google(x) cout<<"\Case #"<<x<<"\:"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;

ll popcount(ll num){
    num = num - ((num >> 1) & 0x55555555);
    num = (num & 0x33333333) + ((num >> 2) & 0x33333333);
    return ((num + (num >> 4) & 0xF0F0F0F) * 0x1010101) >> 24;
}


void virus(){
        ll size_sq;
        cout<<"Enter the size of Square Matrix: ";
        cin>>size_sq;
        ll mat[size_sq][size_sq];
        cout<<"Input the elements of matrix: \n";

        for(auto i=0; i<size_sq; i++){
            for(auto j=0; j<size_sq; j++) cin>>mat[i][j];
        }

        ll angle;
        cout<<"Enter the angle (multiple of 90 degree) to rotate the Matrix: ";
        cin>>angle;
        ll uniq = (angle/90);
        uniq = (uniq>=4)? (uniq%4) : uniq;

        ll rot;
        cout<<"For Clockwise enter 1 , for Anticlockwise 0: ";
        cin>>rot;
        if(rot == 0){
            if(uniq == 1) uniq = 3;
            else if(uniq == 3) uniq = 1; 
        }
        

        cout<<"\nResultant Matrix \n";
        if(uniq == 0){
            for(auto i=0; i<size_sq; i++){
                for(auto j=0; j<size_sq; j++) cout<<mat[i][j]<<" ";
                cout<<endl;
            }
        }
        else if(uniq == 1){
            for(auto j=0; j<size_sq; j++){
                for(auto i=size_sq-1; i>=0 ;i--) cout<<mat[i][j]<<" ";
                cout<<endl;
            }
        }
        else if(uniq == 2){
            for(auto i=size_sq-1; i>=0; i--){
                for(auto j=size_sq-1; j>=0; j--) cout<<mat[i][j]<<" ";
                cout<<endl;
             }
        }
        else if(uniq == 3){
            for(auto j=size_sq-1; j>=0; j--){
                for(auto i=0; i<size_sq; i++) cout<<mat[i][j]<<" ";
                cout<<endl;
            }
        }
        else cout<<"INVALID INPUT\n";

}


int32_t main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    ll t = 1;
    //cin>>t;
    while(t--){
           auto start = high_resolution_clock::now();
           virus();
           auto stop = high_resolution_clock::now();
           auto duration = duration_cast<seconds>(stop - start);
         //cout << "Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}
