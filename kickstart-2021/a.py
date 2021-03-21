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

def answer(n, k, s):
    cur_k = 0
    start, end = 0, len(s)-1
    while start < end:
        if s[start] != s[end]:
            cur_k += 1
        
        start += 1
        end -= 1

    return abs(cur_k-k)

if __name__ == "__main__":
    t = inp()
    count = 1
    while count != t+1:
        n, k = inlt()
        s = insr()
        print("Case #{}: {}".format(count, answer(n, k, s)))
        count += 1
            