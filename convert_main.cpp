#include <iostream>
#include <cstring>
#include "data2lib.h"

/*bool checkFile(fstream &fs,string filename){
	if(!fs.is_open()){
		cout<<"can not open file "<<filename<<endl;
		return false;
	}
	else
		return true;
}*/


int main(int argc,char** argv){
	string ifile=argv[1];//filename of input data
	string ofile=argv[2];//filename of output libsvm data
	ifstream ifs(ifile.c_str());
	//check if file open
	if(!ifs.is_open()){
		cout<<"can not open file "<<ifile<<endl;
		return 1;
	}
	ofstream ofs(ofile.c_str());
	if(!ofs.is_open()){
		cout<<"can not open file "<<ofile<<endl;
		return 1;
	}
    //transfer UCI data to libsvm data
	//uci2Lib(ifs,ofs);
	kaggle2Lib(ifs,ofs);

	ifs.close();
	ofs.close();
    return 0;

}