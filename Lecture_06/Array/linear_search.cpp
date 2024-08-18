#include<iostream>
using namespace std;

int linearSearch(int arr[], int size,int key){
    for(int i = 0; i<size; i++){
        if(key == arr[i]){
            return 1;
        }
    }
    return 0;
}


int main(){
    int arr[6] = {2,3,6,7,1,5};
    int size = 6;

  if(linearSearch(arr, size, 10)){
    cout << "Present" << endl;
  }else{
    cout << "Absent" << endl;
  }

}