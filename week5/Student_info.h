#pragma once
#ifndef GUARD_Student_info_h
#define GUARD_Student_info_h

#include<iostream>
#include<string>
#include<vector>

using namespace std;

//援ъ“泥 ? 
struct Student_info {
	//?띿꽦
	string name;
	double midterm, fin;
	vector<double>homework;
};

//?⑥닔 ?먰삎 ?뺤쓽
bool compare(const Student_info&, const Student_info&);	//?대쫫 鍮꾧탳?섍린
istream& read(istream&, Student_info&);	//???숈깮???뺣낫 ?쎄린
istream& read_hw(istream&, vector<double>&);	//紐⑤뱺 怨쇱젣 ?먯닔 ?쎄린

#endif // !GUARD_Student_info_h
