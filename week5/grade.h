#pragma once

#ifndef GUARD_grade_h
#define GUARD_grade_h

#include<vector>
#include<list>
#include"Student_info.h"

using std::vector;	//추가

	//?먰삎?뺤쓽臾?double grade(double, double, const vector<double>&);
double grade(double, double, const vector<double>&);
double grade(double, double, double);
double grade(const Student_info&);


//Student_info 怨꾩궛
double grade(const Student_info& s) {
	return grade(s.midterm, s.fin, s.homework);
}

bool fgrade(const Student_info&);
vector<Student_info>extract_fails(vector<Student_info>&);
list<Student_info>extract_fails(list<Student_info>&);
#endif // GUARD_grade_h

