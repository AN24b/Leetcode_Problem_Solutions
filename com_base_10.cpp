class Solution {
public:
    int bitwiseComplement(int n) {

        int m = n ;
        int mask = 0;
        if(n==0){
            return 1;
        }
        // left shit to obtain 0 (<<)
        // or (|) for making last bit 1
        // right shift to discard ending bit 
        while(m!=0){
            mask = (mask <<1) | 1;
            m = m >> 1;
        }
        // (~) not operation to obtain complememt 
        // & with mask to get correct result
        int ans = (~n) & mask;
        return ans ;
        
    }
};