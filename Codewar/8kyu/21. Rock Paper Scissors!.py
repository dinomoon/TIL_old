# 플레이어2명 각각 받아서 누가 이겼는지 돌려줌
# 내 풀이
def rps(p1, p2):
    if p1 == p2:
        return 'Draw!'
    if p1 == 'rock' and p2 == 'scissors':
        return 'Player 1 won!'
    if p1 == 'rock' and p2 == 'paper':
        return 'Player 2 won!'
    if p1 == 'scissors' and p2 == 'rock':
        return 'Player 2 won!'
    if p1 == 'scissors' and p2 == 'paper':
        return 'Player 1 won!'
    if p1 == 'paper' and p2 == 'rock':
        return 'Player 1 won!'


# 사람들 풀이
def rps(p1, p2):
    beats = {'rock': 'scissors', 'scissors': 'paper', 'paper': 'rock'}
    if beats[p1] == p2:
        return "Player 1 won!"
    if beats[p2] == p1:
        return "Player 2 won!"
    return "Draw!"

##
def rps(p1, p2):
    hand = {'rock':0, 'paper':1, 'scissors':2}
    results = ['Draw!', 'Player 1 won!', 'Player 2 won!']
    return results[hand[p1] - hand[p2]]

###
def rps(p1, p2):
    if p1 == p2:
        return 'Draw!'
    elif (p1 == 'rock' and p2 == 'scissors') or (p1 == 'scissors' and p2 == 'paper') or (p1 == 'paper' and p2 == 'rock'):
        return 'Player 1 won!'
    else:
        return 'Player 2 won!'
