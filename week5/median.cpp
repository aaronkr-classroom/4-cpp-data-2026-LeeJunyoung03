#include<vector>
#include<algorithm>
#include<stdexcept>
#include"median.h"

using namespace std;	//domain_error()때문에

double median(vector<double>vec) {
	typedef vector<double>::size_type vec_sz;

	vec_sz size = vec.size();
	if (size == 0) {
		throw domain_error("Median of empty vector!");
		//return 1;
	}

	sort(vec.begin(), vec.end());
	vec_sz mid = size / 2;
	return size % 2 == 0	//議곌굔
		? (vec[mid] + vec[mid - 1]) / 2	//李몄씪??諛섑솕
		: vec[mid];	//嫄곗쭞????諛섑솚
}
