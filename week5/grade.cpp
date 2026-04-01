#include<vector>
#include<stdexcept>
#include"Student_info.h"
#include"grade.h"
#include"median.h"


//?낅젰 ?ㅽ듃由쇱뿉??怨쇱젣 ?먯닔瑜??뉖━?댁꽌vector<double>???ｌ쓬
istream& read_hw(istream& in, vector<double>& hw) {
	if (in) {
		//?댁쟾 ?댁슜???쒓굅
		hw.clear();

		//怨쇱젣 ?먯닔瑜??쎌쓬
		double x;

		while (in >> x) {
			hw.push_back(x);
		}

		//?ㅼ쓬 ?숈깮???먯닔 ?낅젰 ?묒뾽??怨좊젮???ㅽ듃由쇱쓣 吏?
		in.clear();
		return in;
	}
}

//以묎컙怨좎궗 ?먯닔, 湲곕쭚怨좎궗 ?먯닔, 怨쇱젣 ?먯닔??踰≫꽣濡??숈깮??醫낇빀
//?먯닔瑜?援ы븿. ???⑥닔???몄닔瑜?蹂듭궗?섏? ?딄퀬 median ?⑥닔媛
// ?대떦?묒뾽???ㅽ뻾
double grade(double mid, double fin, vector<double>& hw) {
	if (hw.size() == 0) {
		throw domain_error("NO homework!");
	}


	//return (mid * 0.2 + fin * 0.4 +(hw1 + hw2 + ...) / hw.size())
	//new grade() ?⑥닔
	return grade(mid, fin, median(hw));
}

//怨꾩궛?섎뒗 grade() ?⑥닔
double grade(double midterm, double final, double homework) {
	return midterm * 0.2 + final * 0.4 + homework * 0.4;
}

bool fgrade(const Student_info& s) {
	return grade(s) < 60;
}
list<Student_info>extract_fails(list<Student_info>&students) {
	list<Student_info>fail;
	//vector<Student_info>::size_type i = 0;
	list<Student_info>::iterator iter = students.begin;

	//불변서이students 벡터의 [0,i)범위에 있는 요소들은 과목을 통과한 학생들의 정보\
	//while (iter != students.size()) {
	while (iter != students.end()) {
		//if (fgrade(students[i])) {
		if(fgrade(*iter)){
			//fail.push_back(students[i]);
			//students.erase(students.begin() + i);	//i번째 제거
			fail.push_back(*iter);
			iter = students.erase(iter);
		}
		else {
			//++i;
			++iter;
		}
	}
	return fail;
}
