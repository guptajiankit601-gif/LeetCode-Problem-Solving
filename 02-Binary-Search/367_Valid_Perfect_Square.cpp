class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int start = 0;
        long long int end = num;
        long long int mid = start + (end-start)/2;

        while(start<=end){
            long long int square = mid * mid;
            if(square == num){
                return true;
            }else if(square > num){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
            mid = start + (end-start)/2;
        }
        return false;
    }
};
