class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        	uint16_t rows[9] = { 0 }, cols[9] = { 0 }, box[9] = { 0 };
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    char c = board[i][j];
                    if (c == '.')
                        continue;
                    
                    uint16_t mask = 1 << (c - '1');
                    int b = (i / 3) * 3 + (j / 3);
                    if (rows[i] & mask || cols[j] & mask || box[b] & mask)
                        return false;
                    rows[i] |= mask;
                    cols[j] |= mask;
                    box[b] |= mask;
                }
            }
            return true;
    }
};