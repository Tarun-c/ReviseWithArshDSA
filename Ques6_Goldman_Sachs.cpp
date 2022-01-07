class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
      int str1_size = str1.length();
        int str2_size = str2.length();
        if(str1+str2 != str2+str1){
            return "";
        }
        int gcd_of_str = __gcd(str1_size,str2_size);
        return str1.substr(0,gcd_of_str);
    }
};
