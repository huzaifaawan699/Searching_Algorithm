#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter Number of Elements in an Array:"<<endl;
cin>>n;
if(n<=0){
    cout<<"Invalid Choice Please Enter positive integer:"<<endl;

    return -1;
}
int arr[n];
cout<<"Enter Elements in Array:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int index=-1;
int search;
cout<<"Enter Elements to Search: "<<endl;
cin>>search;
for(int i=0;i<n;i++){
    if(arr[i]==search){
        index=i;
        break;
    }
}
if(index!=-1){
    cout<<"Elements Found At Index"<<index<<endl;
}
else
{
    cout<<"Elements not found at index"<<index<<endl;

}



return 0;
}
