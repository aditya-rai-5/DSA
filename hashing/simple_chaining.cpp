#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
using namespace std;

struct Hash{
    int bucket;
    vector<vector<int>> table;

    void insertItem(int key){
        int index=hashFunction(key);
        table[index].push_back(key);
    }

    void deleteItem(int key);

    int hashFunction(int x){
        return x%bucket;
    }

    void displayHash();

    Hash(int b){
        this->bucket=b;
        table.resize(bucket);
    }
};

void Hash::deleteItem(int key){
    int index=hashFunction(key);

    auto it=find(table[index].begin(), table[index].end(), key);
    if(it!=table[index].end()){
        table[index].erase(it);
    }
}

void Hash::displayHash(){
    for(int i=0;i<bucket;i++){
        cout<<i;
        for(int x: table[i]){
            cout<<"-->"<<x;
        }
        cout<<endl;
    }
}

int main(){
    vector<int> a={15,11,27,8,12};
    Hash h(7);
    for(int key:a){
        h.insertItem(key);
    }
    h.deleteItem(12);
    h.displayHash();

    return 0;
}