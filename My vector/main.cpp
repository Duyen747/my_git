#include <iostream>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void testcase1(){
	int n; vector<float> a; float temp;
	cout << "Enter array size: ";
	cin >> n;
	if(n<1){
		cout << "Invalid size!"; 
	}
	for(int i = 0; i<n ; i++){
		cout << "a["<<i<<"] = "; 
		cin >> temp;
		a.push_back(temp);
	}
	cout << "Data: ";
	for(int i=0; i<a.size(); i++)
		cout << a[i] << " ";
	cout << endl;
}

istream& operator >> (istream& iDev, vector<float> &a) {
	float temp;
	a.resize(0);
	while(iDev >> temp) {
		a.push_back(temp);
	}
	return iDev;
}
ostream& operator << (ostream& oDev, vector<float> &a){
	for(int i=0; i<a.size(); i++){
		oDev << a[i] << " ";
	}
	return oDev;
}

int main(int argc, char** argv) {

		vector<float> a;
		cout << "input: ";
		cin >> a;
		cout << "result: ";
		cout << a;
	

}
