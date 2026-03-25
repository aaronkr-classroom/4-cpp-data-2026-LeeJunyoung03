#include<vector>
#include<stdexcept>
#include"Studen_info.h"
#include"grade.h"


//입력 스트림에서 과제 점수를 ㅇ리어서vector<double>에 넣음
istream& read_hw(istream& in, vector<double>& hw) {
	if (in) {
		//이전 내용을 제거
		hw.clear();

		//과제 점수를 읽음
		double x;

		while (in >> x) {
			hw.push_back(x);
		}

		//다음 학생의 점수 입력 작업을 고려해 스트림을 지움
		in.clear();
	}
}

//중간고사 점수, 기말고사 점수, 과제 점수의 벡터로 학생의 종합
//점수를 구함. 이 함수는 인수를 복사하지 않고 median 함수가
// 해당작업을 실행
double grade(double mid, double fin, const vector<double>& hw) {
	if (hw.size() == 0) {
		throw domain_error("NO homework!");
	}


	//return (mid * 0.2 + fin * 0.4 +(hw1 + hw2 + ...) / hw.size())
	//new grade() 함수
	return grade(mid, fin, median(hw));
}

//계산하는 grade() 함수
double grade(double midterm, double final, double homework) {
	return midterm * 0.2 + final * 0.4 + homework * 0.4;
}

//Student_info 계산
double grade(const Student_info& s){
	return midterm
	}
