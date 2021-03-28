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

def reverse(l, i, j):
    while i < j:
        l[i], l[j] = l[j], l[i]
        i += 1
        j -= 1

def find_min(l, i):
    min_idx, min_val = i, l[i]
    for idx in range (i+1, len(l)):
        if l[idx] < min_val:
            min_val = l[idx]
            min_idx = idx
    return min_idx
    
def answer(l):
    total = 0
    for i in range(len(l)-1):
        j = find_min(l, i)
        reverse(l, i, j)
        total += j - i + 1
    return total

if __name__ == "__main__":
    t = inp()
    count = 1
    while count != t+1:
        n = inp()
        l = inlt()
        print("Case #{}: {}".format(count, answer(l)))
        count += 1
            