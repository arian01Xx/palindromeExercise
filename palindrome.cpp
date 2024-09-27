#include <iostream>
#include <string>

using namespace std;

class SolutionFifthyOne{
private:
	bool isPalindrome(string s){
		int i=0, j=s.size()-1;
		while(i<j){
			if(s[i]!=s[j]) return false;
			i++;
			j--;
		}
		return true;
	}
public:
	int countSubstrings(string s){
		int cnt=0;
		for(int i=0; i<s.size(); i++){
			for(int j=i; j<s.size(); j++){
				//subcadena de s[i...j]
				string atom=s.substr(i,j-i+1);
				if(isPalindrome(atom)) cnt++;
			}
		}
		return cnt;
	}
};

int main(){
	return 0;
}