//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/spiral-matrix/
//submission link: https://leetcode.com/submissions/detail/688639789/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int left=0;
        int top=0;
        int right=matrix[0].size()-1;
        int bottom=matrix.size()-1;
        int dir=0;      //0(L to R) 1(T to B) 2(R to L) 3(B to T)
        
        while (left<=right and top<=bottom)
        {
            if (dir==0)
            {
                for (int i=left; i<=right; i++)
                    ans.push_back(matrix[top][i]);
                top++;
                dir=1;
            }
            else if (dir==1)
            {
                for (int i=top; i<=bottom; i++)
                    ans.push_back(matrix[i][right]);
                right--;
                dir=2;
            }
            else if (dir==2)
            {
                for (int i=right; i>=left; i--)
                    ans.push_back(matrix[bottom][i]);
                bottom--;
                dir=3;
            }
            else if (dir==3)
            {
                for (int i=bottom; i>=top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
                dir=0;
            }
        }
        return ans;
    }
};
