def minimax(board, depth, alpha, beta, maximizing_player):
    if is_terminal(board):
        return evaluate(board)

    if maximizing_player:
        max_eval = float('-inf')
        for child in get_children(board, 'X'):
            eval = minimax(child, depth - 1, alpha, beta, False)
            max_eval = max(max_eval, eval)
            alpha = max(alpha, eval)
            if beta <= alpha:
                break
        return max_eval
    else:
        min_eval = float('inf')
        for child in get_children(board, 'O'):
            eval = minimax(child, depth - 1, alpha, beta, True)
            min_eval = min(min_eval, eval)
            beta = min(beta, eval)
            if beta <= alpha:
                break
        return min_eval

def is_terminal(board):
    return evaluate(board) != 0 or all(cell != ' ' for row in board for cell in row)

def evaluate(board):
    for row in board:
        if row.count('X') == 3:
            return 10
        if row.count('O') == 3:
            return -10

    for col in range(3):
        if all(board[row][col] == 'X' for row in range(3)):
            return 10
        if all(board[row][col] == 'O' for row in range(3)):
            return -10

    if all(board[i][i] == 'X' for i in range(3)):
        return 10
    if all(board[i][i] == 'O' for i in range(3)):
        return -10

    if all(board[i][2 - i] == 'X' for i in range(3)):
        return 10
    if all(board[i][2 - i] == 'O' for i in range(3)):
        return -10

    return 0

def get_children(board, player):
    children = []
    for row in range(3):
        for col in range(3):
            if board[row][col] == ' ':
                new_board = [r.copy() for r in board]
                new_board[row][col] = player
                children.append(new_board)
    return children

# Example usage
initial_board = [
    [' ', ' ', ' '],
    [' ', ' ', ' '],
    [' ', ' ', ' ']
]

best_value = minimax(initial_board, 9, float('-inf'), float('inf'), True)
print("Best value for 'X':", best_value)


