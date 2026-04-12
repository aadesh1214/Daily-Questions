import collections

class Solution:
    def isValidSudoku(self, board: list[list[str]]) -> bool:
        # Create our three trackers
        rows = collections.defaultdict(set)
        cols = collections.defaultdict(set)
        squares = collections.defaultdict(set)  # Key will be a tuple: (r // 3, c // 3)

        # Loop through every cell in the 9x9 board
        for r in range(9):
            for c in range(9):
                # If the cell is empty, skip it
                if board[r][c] == ".":
                    continue
                
                # Check 1: Have we seen this number in the current row, column, or square?
                if (board[r][c] in rows[r] or
                    board[r][c] in cols[c] or
                    board[r][c] in squares[(r // 3, c // 3)]):
                    return False # We found a duplicate! Rule broken.
                
                # Check 2: If it's a new number, add it to our trackers
                rows[r].add(board[r][c])
                cols[c].add(board[r][c])
                squares[(r // 3, c // 3)].add(board[r][c])
                
        # If we check every cell and break no rules, the board is valid!
        return True
