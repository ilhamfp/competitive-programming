import sys
import itertools
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
    
def calculate_cost(l):
    total = 0
    for i in range(len(l)-1):
        j = find_min(l, i)
        reverse(l, i, j)
        total += j - i + 1
    return total

def answer(n, c):
    result = [x for x in range(1,n+1)]
    lists = itertools.permutations(result)
    for l in lists:
        cost = calculate_cost(list(l))
        if cost == c:
            return ' '.join([str(x) for x in l])

    return "IMPOSSIBLE"

if __name__ == "__main__":
    t = inp()
    count = 1
    while count != t+1:
        n, c = inlt()
        print("Case #{}: {}".format(count, answer(n, c)))
        count += 1
            