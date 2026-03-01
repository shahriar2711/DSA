class Solution {
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        do{
            slow = getsum(slow);
            fast = getsum(getsum(fast));
        }while(slow!=fast);

        if(slow == 1){
            return true;
        }else{
            return false;
        }
    }

    int getsum(int num){
        int sum = 0;
        while(num>0){
            int digit = num%10;
            sum += digit*digit;
            num = num/10;
        }
        return sum;
    }
};