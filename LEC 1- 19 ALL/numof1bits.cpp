


    class Solution {
public:
    int hammingWeight(uint32_t n) {
        int n = 00000000000000000000000000001011;
        int count = 0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};



    // int n = 0000000000000000000000000000000001011;
    // int count  = 0;
    // while(n!=0){
    //     if(n&1) {
    //         count ++;
    //     }
    //     n = n >> 1;
    // }
