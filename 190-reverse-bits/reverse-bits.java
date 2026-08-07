class Solution {
    public int reverseBits(int n) {
        int rev=0;
        int total=0;
        for(int i=0; i<32; i++){
            rev=rev<<1;
            total=n&1;
            rev=rev|total;
            n=n>>>1;
        }
        return rev; 
    }
}