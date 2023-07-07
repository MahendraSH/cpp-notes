#include<bits/stdc++.h>
using namespace std;
int main(){
int ele,pos,choice;
char ch;
vector<int>v;
for(int i=0;i<7;i++){
v.push_back(i);

}
vector<int>::iterator it;
do{
cout<<"1)the number of elements in the vector"<<endl;
cout<<"2)to check whether the array is empty or not"<<endl;
cout<<"3)insert some elements in the array"<<endl;
cout<<"4)remove the element in the particular position"<<endl;
cout<<"5)to find the index of a particular element"<<endl;
cout<<"enter your choice"<<endl;
cin>>choice;
switch(choice){
case 1:cout<<"the number of element in the vector are"<<v.size()<<endl;
break;
case 2:if(v.empty()){
cout<<"array is empty"<<endl;
        }
else{
cout<<"element is present in the array"<<endl;
}
break;
case 3:
cout<<"Element the element and position it should be inserted"<<endl;
cin>>ele>>pos;
v.insert(v.begin()+pos-1,ele);
cout<<"The element is inserted"<<endl;
break;
case 4:
cout<<"Enter the element to be deleted"<<endl;
cin>>ele;
it=find(v.begin(),v.end(),ele);

if(it!=v.end()){
v.erase(it);
cout<<"element found and deleted"<<endl;
}
else{
cout<<"Element not found"<<endl;
}
break;
case 5:
cout<<"index of the particular element is:"<<endl;
cin>>ele;
it=find(v.begin(),v.end(),ele);
if(it!=v.end()){
cout<<"Element is found at position:"<<it-v.begin()<<endl;
}
else{
cout<<"Element not found"<<endl;
}
break;
}
cout<<"after these operations final array is"<<endl;
for(int i=0;i<v.size();i++){
cout<<v[i]<<endl;
}
cout<<"do you want to continue(y/Y)"<<endl;
cin>>ch;
}while(ch=='y' || ch=='Y');




}