class Solution {
public:
    string defangIPaddr(string address) {
     string ans;
        for(auto c : address){
            if(c == '.'){
                ans += "[.]";
            }
            else ans += c;
        }
        return ans;
   }
};

IN JAVA 
class Solution {
    public String defangIPaddr(String address) {
        return address.replace("." , "[.]");
    }
}

class Solution {
public:
    string defangIPaddr(string address) {
  return regex_replace(address, regex("[.]"), "[.]");
   }
};
