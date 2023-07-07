#include<bits/stdc++.h>
using namespace std;
int main(){
int sum=0;
vector<int>v;
cout<<"Enter the elements in the array"<<endl;
for(int i=0;i<5;i++){
v.push_back(i);

}
sort(v.begin(),v.end(),greater<int>());
cout<<"After sorting the array will be"<<endl;
for(int i=0;i<v.size();i++){
cout<<v[i]<<endl;
}
cout<<"The sum of the elements in the array"<<endl;
for(int i=0;i<v.size();i++){
sum+=v[i];
}
cout<<sum<<endl;

}