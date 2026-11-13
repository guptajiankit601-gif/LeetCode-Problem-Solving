class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int start = 0;
        int end = n - 1;
        int mid = start + (end-start)/2;

        while(start<=end){
            if(letters[mid] > target){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
            mid = start + (end-start)/2;
        }
        return letters[start % n];
    }
};
