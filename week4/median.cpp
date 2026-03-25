#include<vector>
#include<algorithm>
#include<stdexcept>

using namespace std;

double median(vector<double>vec) {
	typedef vector<double>::size_type vec_sz;

	vec_sz size = vec.size();
	if (size == 0) {
		throw domain_error("Median of empty vector!");
		return 1;
	}

	sort(vec.begin(), vec.end());
	vec_sz mid = size / 2;
	return size % 2 == 0	//조건
		? (vec[mid] + vec[mid - 1]) / 2	//참일때 반화
		: vec[mid];	//거짓일 때 반환
}
