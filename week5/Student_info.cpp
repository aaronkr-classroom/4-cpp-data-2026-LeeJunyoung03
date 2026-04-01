#include"Student_info.h"

bool compare(const Student_info& a, const Student_info& b) {
	return a.name < b.name;	//True or False 諛섑솚
}
istream& read(istream& is, Student_info& s) {
	//?숈깮 ?대쫫, 以묎컙怨좎궗, 湲곕쭚怨좎궗 ?먯닔 ?쎌뼱 ???	is >> s.name >> s.midterm >> s.final;
	//怨쇱젣?먯닔瑜??쎌쓬
	read_hw(is, s.homework);
	return is;
}

//紐⑤뱺 怨쇱젣 ?먯닔 ?쎄린
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
	}
	return in;
}
