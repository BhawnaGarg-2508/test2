class Solution {
public:
    string convert(string s, int numRows) {

        

        string ans = "";

        vector<vector<int>> vec;

        for(int i = 0; i< numRows; i++){
            vector <int> vec1;
            vec.push_back(vec1);
        }


        int i = 0;

        while(i< s.length()){
            int j = 0;
            while(i< s.length() && j < numRows){
                vec[j].push_back(s[i]);
                j++;
                i++;
            }

            j = j-2;
            while(i< s.length() && j >= 1){
                vec[j].push_back(s[i]);
                j--;
                i++;
            }
        }


        for(int k = 0; k< vec.size(); k++){
            for(int l = 0; l< vec[k].size(); l++){
                ans += vec[k][l];
            }
        }

        return ans;
        
    }
};