class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        int i=0;
        int j=n-1;

        while(i<j)
        {
            int sum = numbers[i]+numbers[j];

            if(sum==target)return {i+1,j+1};

            if(sum<target)
            {
                i++;
                while(i>0 && numbers[i]==numbers[i-1])i++;
            }
            else{
                j--;
                while(j<n-1 && numbers[j]==numbers[j+1])j--;
            }
        }
        return {-1};
    }
};
