#include<iostream>
#include<iomanip>	//setw()??λ땾

using namespace std;

//??ъ쁽揶쎛 ?얜챷???以?癰궰野껋?釉????얜챷???곸벥 疫뀀챷?좂몴?獄쏆꼹???롫뮉 ??λ땾
int get_length(int num) {
	//Base case: 0
	int length = 1;
	while (num / 10 > 0) {
		num /= 10;
		++length;	//10/10=1+1
	}
	return length;
}

int main(void) {
	const int max_num = 1000;

	int max_len = get_length(max_num);
	int max_sq = get_length(max_num * max_num);

	for (int i = 1; i <= max_num; i++) {
		cout <<
			setw(max_len) << i <<
			setw(max_sq+1) << i * i << endl;
	}

	return 0;
}
