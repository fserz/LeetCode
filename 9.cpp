class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int len = 1;
        while (x / len >= 10){//保证x/len为最高位值
            len *= 10;
        }
        while(x){
            int left = x / len;
            int right = x % 10;
            if (left != right) return false;
            x %= len;//去除首位
            x = x / 10;//去除末位
            len /= 100;//数据少了两位，len也减小100倍
        }
        return true;
    }
};