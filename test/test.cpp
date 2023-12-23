#include <iostream>
#define SIZE 5
using namespace std;

int main() {
  int arr[SIZE]={};
  for (int i = 0; i < SIZE; i++) {
   arr[i]=rand()%200 -50;
}
  for (int i = 0; i < size(arr); i++) {
    cout<<  arr[i]<<" ";
}
}
