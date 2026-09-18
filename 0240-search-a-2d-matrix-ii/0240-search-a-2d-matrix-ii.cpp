class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();

        int rIndex=0;
        int cIndex=c-1;

        while(rIndex<r && cIndex>=0){
            int element=matrix[rIndex][cIndex];

            if(element==target){
                return 1;
            }

            if(element<target){
                rIndex++;
            }
            else{
                cIndex--;
            }
        }
        return 0;
    }
};