class Solution {
public:
    bool isPalindrome(long x) {
    long y=0,i=0,r;
        i=x;
        if(i>=0){
           do
     {
         r = x % 10;
         y = (y * 10) + r;
         x = x / 10;
     } while (x != 0);
    if(y==i)
   return true;
    else return false;}
        else return false;

    }
};
