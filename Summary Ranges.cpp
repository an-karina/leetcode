class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> str;
        long long begin = 0;
        long long count = 0;

        if (!nums.empty()){
            begin = nums[0];
            count = begin + 1;
            for (int i = 1; i < nums.size(); i++){
                if (!(nums[i] == count)){
                    if (count - begin == 1)
                         str.push_back(to_string(begin));
                     else
                        str.push_back(to_string(begin) + "->" + to_string(count - 1));
                        begin = nums[i];
                        count = begin + 1;
                    }
                    else if (nums[i] == count)
                        ++count;
                }
            if (count - begin == 1)
                str.push_back(to_string(begin));
            else
                 str.push_back(to_string(begin) + "->" + to_string(count - 1));
            }
        return str;   
    }
};