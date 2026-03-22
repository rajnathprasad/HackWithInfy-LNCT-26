class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int countsOf5=0;
        int countsOf10=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                countsOf5+=1;
            }
            else if(bills[i]==10 && countsOf5>0){
                countsOf10+=1;
                countsOf5-=1;
            }
            else if(bills[i]==20 && countsOf5>0){
                if(countsOf10>0){
                    countsOf10-=1;
                    countsOf5-=1;
                }
                else if(countsOf5>2){
                    countsOf5-=3;
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};

// Time	O(n)
// Space	O(1)