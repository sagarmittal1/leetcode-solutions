class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i = 0; i < command.size(); i++) {
            if(command[i] == 'G') {
                ans.push_back('G');
            }else if(command[i+1] == ')') {
                ans.push_back('o');
                i++;
            }else{
                string x = "al";
                ans += x;
                i += 3;
            }
        }
        return ans;
    }
};