class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> rows(numRows);
        string solution = "";
        if(numRows ==1)
         return s;
        int len =s.length();
        int curr=0;
        bool down;
        for(int i=0;i<len;i++){
            rows[curr]+=s[i];
            if(curr == numRows-1)
             down=false;
            else if(curr == 0)
             down =true;
            (down)?(curr++):(curr--);
        }
         for(int j=0; j<numRows; j++) {
            solution += rows[j];
        }
        return solution;
    }
};

