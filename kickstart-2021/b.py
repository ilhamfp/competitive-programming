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

def find_horizontal_segments(r, c, grid, memo):
    for iter_r in range(r):
        in_segment = False
        start_c = 0

        for iter_c in range(c):
            if grid[iter_r][iter_c] == 1:
                if not in_segment:
                    in_segment = True
                    start_c = iter_c
            else:
                if in_segment:
                    in_segment = False
                    length = iter_c - start_c
                    if length >= 2:
                        for c_key in range(start_c, iter_c):
                            length_start = c_key-start_c+1
                            memo["{}_{}".format(iter_r, c_key)] = (length-length_start+1, length_start)

        if in_segment:
            in_segment = False
            length = c - start_c
            if length >= 2:
                for c_key in range(start_c, c):
                    length_start = c_key-start_c+1
                    memo["{}_{}".format(iter_r, c_key)] = (length-length_start+1, length_start)

def find_vertical_segments(r, c, grid, memo):
    for iter_c in range(c):
        in_segment = False
        start_r, start_c = 0, 0

        for iter_r in range(r):
            if grid[iter_r][iter_c] == 1:
                if not in_segment:
                    in_segment = True
                    start_r = iter_r
                    start_c = iter_c
            else:
                if in_segment:
                    in_segment = False
                    length = iter_r - start_r
                    if length >= 2:
                        for r_key in range(start_r, iter_r):
                            length_start = r_key-start_r+1
                            memo["{}_{}".format(r_key, iter_c)] = (length-length_start+1, length_start)

        if in_segment:
            in_segment = False
            length = r - start_r
            if length >= 2:
                for r_key in range(start_r, r):
                    length_start = r_key-start_r+1
                    memo["{}_{}".format(r_key, iter_c)] = (length-length_start+1, length_start)


def calc_result(hor, ver):
    if hor < 2 or ver < 2:
        return 0

    total = 0
    # Horizontal as the longer one:
    max_ver = int(hor/2)
    if ver > max_ver:
        total += max_ver-1
    else:
        # ver < max_ver:
        total += ver-1

    # Vertical as the longer one:
    max_hor = int(ver/2)
    if hor > max_hor:
        total += max_hor-1
    else:
        # hor < max_hor:
        total += hor-1

    return total

def calc_result_parent(hor, ver):
    hor1, hor2 = hor
    ver1, ver2 = ver
    total = 0

    total += calc_result(hor1, ver1)
    total += calc_result(hor1, ver2)
    total += calc_result(hor2, ver1)
    total += calc_result(hor2, ver2)

    return total    

def answer(r, c, grid):
    h_end = {}
    find_horizontal_segments(r, c, grid, h_end)

    v_end = {}
    find_vertical_segments(r, c, grid, v_end)

    # print(h_end)
    # print(v_end)
    result = 0
    for key in h_end:
        if key in v_end:
            result += calc_result_parent(h_end[key], v_end[key])

    return result 

if __name__ == "__main__":
    t = inp()
    count = 1
    while count != t+1:
        r, c = inlt()
        grid = []
        for _ in range(r):
            grid.append(inlt())

        print("Case #{}: {}".format(count, answer(r, c, grid)))
        count += 1
            