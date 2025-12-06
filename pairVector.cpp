#include <bits/stdc++.h>
using namespace std;
// void printVec(vector<pair<int,int>>&v){
//     cout<<"size:-"<<v.size()<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i].first<<" "<<v[i].second<<" "<<endl;
//     }
// }
void printVec(vector<int>&v){
    cout<<"size:-"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    //pair<int,string>p;
   // p=make_pair(2,"abc");
//    p={2,"abc"};
//     cout<<p.first<<" "<<p.second<<endl;
//     int a[]={1,3,2};
//     int b[]={2,3,4};
//     pair<int,int>p_array[3];
//     p_array[0]={1,2};
//     p_array[1]={2,3};
//     p_array[2]={3,4};
//     for(int i=0;i<3;i++){
//         cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
//     }

        // cin>>p.first;
        // cout<<p.first;
        //vector<pair<int,int>>v={{1,2},{3,4},{3,1}};
       
       
        // vector<pair<int,int>>v;
        // printVec(v);
        // int n;
        // cin>>n;
        // for(int i=0;i<n;i++){
        //     int x,y;
        //     cin>>x>>y;
        //     v.push_back({x,y});
        // }
        // printVec(v);



        int N;
        cin>>N;
        vector<int>v[N];
        for(int i=0;i<N;i++){
            int n;
            cin>>n;
            for(int j=0;j<n;j++){
                int x;
                cin>>x;
                v[i].push_back(x);
            }
        }
        for(int i=0;i<N;i++){
            printVec(v[i]);
        }
        cout<<v[1][1];
}
