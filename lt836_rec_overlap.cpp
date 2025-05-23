#include<iostream>
#include<cmath>

using namespace std;

bool rectangle_overlap(int rec1[], int rec2[]){
    if(rec1[3]>rec2[1]&&rec1[2]>rec2[0]&&rec1[0]<rec2[2]&&rec1[1]<rec2[3]){
        return true;
    }
    return false;
}

int main(){
    int arr1[4];
    int arr2[4];
    for(int i=0;i<4;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<4;i++){
        cin>>arr2[i];
    }
    cout<<rectangle_overlap(arr1,arr2);

    return 0;
}