// array decleration ,initialization ,traversing 
#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    cout<<array[0]<<endl;
    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[0])<<endl;
int size=sizeof(array)/sizeof(array[0]);
    //for loop traversing
    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;

    }
    //for each loop traversing
    for(int ind:array){
        cout<<ind<<endl;
    }

    ///while loop for it 
    int index=0;
    while(index<size){
        cout<<array[index]<<endl;
        index++;
    }


}