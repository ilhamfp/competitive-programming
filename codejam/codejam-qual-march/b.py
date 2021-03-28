import sys
input = sys.stdin.readline

############ ---- Input Functions ---- ############
def inp():
    return(int(input()))
def inlt():
    return(list(map(int,input().split())))
def insr():
    s = input()
    return(list(s[:len(s) - 1]))
def invr():
    return(map(int,input().split()))



def answer(x, y, s):
    # X for CJ
    # Y for JC

    # Iterate throught S
    # On each iteration, if prev calculate the cost if the previous one was C/J.
    dp = [[0,0] for _ in range(len(s))] # [C, J]
    for i in range(1, len(s)):
        if s[i] == 'J':
            if s[i-1] == '?':
                # C choosen
                dp[i][0] = min(dp[i-1][0]+x, dp[i-1][1])

                # J choosen
                dp[i][1] = min(dp[i-1][0]+x, dp[i-1][1])

            elif s[i-1] == 'C':
                dp[i][0] = min(dp[i-1][0] + x, dp[i-1][1] + x)
                dp[i][1] = min(dp[i-1][0] + x, dp[i-1][1] + x)

            elif s[i-1] == 'J':
                dp[i][0] = min(dp[i-1][0], dp[i-1][1])
                dp[i][1] = min(dp[i-1][0], dp[i-1][1])
                
        elif s[i] == 'C':
            if s[i-1] == '?':
                # C choosen
                dp[i][0] = min(dp[i-1][1] + y, dp[i-1][0])

                # J choosen
                dp[i][1] = min(dp[i-1][1] + y, dp[i-1][0])

            elif s[i-1] == 'C':
                dp[i][0] = min(dp[i-1][0], dp[i-1][1])
                dp[i][1] = min(dp[i-1][0], dp[i-1][1])

            elif s[i-1] == 'J':
                dp[i][0] = min(dp[i-1][0] + y, dp[i-1][1] + y)
                dp[i][1] = min(dp[i-1][0] + y, dp[i-1][1] + y)

        elif s[i] == '?':
            if s[i-1] == '?':
                val_prev_j_now_c = dp[i-1][1] + y
                val_prev_c_now_c = dp[i-1][0]
                dp[i][0] = min(val_prev_j_now_c, val_prev_c_now_c)

                val_prev_j_now_j = dp[i-1][1]
                val_prev_c_now_j = dp[i-1][0] + x
                dp[i][1] = min(val_prev_j_now_j, val_prev_c_now_j)

            elif s[i-1] == 'C':
                dp[i][0] = dp[i-1][0]
                dp[i][1] = dp[i-1][0] + x

            elif s[i-1] == 'J':
                dp[i][0] = dp[i-1][1] + y
                dp[i][1] = dp[i-1][1]


    return min(dp[len(s)-1][0], dp[len(s)-1][1])

if __name__ == "__main__":
    t = inp()
    count = 1
    while count != t+1:
        x, y, s = input().strip().split(' ')
        # print(x, y, s)
        x = int(x)
        y = int(y)
        print("Case #{}: {}".format(count, answer(x, y, s)))
        count += 1
            