#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int arr[MAX];
int front = -1 , rear = -1;
int n=MAX;

void enqueue(int data){
  if(front == n-1){
    cout<<"Queue is overflow "<<endl;
  }
  else{
    if(rear == -1 && front == -1){
      rear=0;
      front++;
      arr[front]= data;
    }else{
      front++;
      arr[front]= data;
    }
  }
}

void display(){
  if(rear==-1){
    cout<<"Queue is empty"<<endl;
  }else{
    cout<<"Queue is : ";
    for(int i=rear;i<=front ;i++){
      cout<<arr[i]<<" ";
    }
  }
}
int main() {
enqueue(2);
enqueue(1);
enqueue(4);
enqueue(9);
enqueue(10);
display();
}