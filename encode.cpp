#include<iostream>
#include "huffman.hpp"
using namespace std;

int main(int argc, char* argv[]){
    if(argc !=3){
        cout<<"Failed to found Files";
        exit(1);
    }

    huffman f(argv[1], argv[2]);
    f.compress();
    cout<<"Compressed/Encode Successfully"<<endl;

    return 0;
}