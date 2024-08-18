#include<iostream>
using namespace std;

int max(int arr[], int size){
int m = arr[0];
for(int i = 0; i<size; i++){
    if(m < arr[i]){
        m = arr[i];
    }
}
return m;
}

int min(int arr[], int size){
int m = arr[0];
for(int i = 0; i<size; i++){
    if(m > arr[i]){
        m = arr[i];
    }
}
return m;
}



int main(){
  int arr[5] = {1,2,-30,4,5} ;
  int size = 5;

  cout << "Max Number " << max(arr, size) << endl << "Min Number " << min(arr, size) << endl; 
}