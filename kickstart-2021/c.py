from collections import deque
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

def valid(r, c, new_r, new_c):
    return (0 <= new_r < r) and (0 <= new_c < c)

def answer(r, c, grid):
    result = 0
    direction = [(1,0), (0,1), (-1,0), (0,-1)]

    # Find highest point
    rh, ch, h = -1,-1,-1
    grid_list = []
    for r_it in range(r):
        for c_it in range(c):
            if grid[r_it][c_it] != 0:
                if grid[r_it][c_it] > h:
                    h = grid[r_it][c_it]
                    rh = r_it
                    ch = c_it

                grid_list.append((grid[r_it][c_it], r_it, c_it))

    grid_list.sort(key=lambda x: (x[0]), reverse=False)
    # print(grid_list)

    visited = set()
    queue = deque()

    iter = len(grid_list)-1
    # Start BFS from highest points
    last_height = h
    while grid_list[iter][0] == last_height and iter >= 0:
        queue.append((grid_list[iter][1], grid_list[iter][2], grid_list[iter][0], 0)) # row, col, height, updates
        visited.add((grid_list[iter][1], grid_list[iter][2]))
        iter -= 1
    else:
        last_height -= 1
    

    while queue or iter>=0:
        second_queue = deque()

        while queue:
            cur_r, cur_c, cur_h, cur_update = queue.popleft()
            grid[cur_r][cur_c] += cur_update
            ideal_neighbour = grid[cur_r][cur_c]-1

            # Visit neighbor with 
            for dir in direction:
                new_r = cur_r+dir[0]
                new_c = cur_c+dir[1]
                if valid(r, c, new_r, new_c) and ((new_r, new_c) not in visited):
                    visited.add((new_r, new_c))
                    diff = grid[new_r][new_c] - ideal_neighbour

                    if diff == 0:
                        # No update
                        second_queue.append((new_r, new_c, ideal_neighbour, 0))
                    elif diff < 0:
                        # Lower, need to add boxes
                        second_queue.append((new_r, new_c, ideal_neighbour, -1*diff))
                        result += (-1*diff)

        while grid_list[iter][0] == last_height and iter >= 0:
            second_queue.append((grid_list[iter][1], grid_list[iter][2], grid_list[iter][0], 0)) # row, col, height, updates
            visited.add((grid_list[iter][1], grid_list[iter][2]))
            iter -= 1
        else:
            last_height -= 1
        
        

        queue = second_queue
        if len(queue) == 0 and iter >= 0:
            last_height = grid_list[iter][0]

    # for r_it in range(r):
    #     for c_it in range(c):
    #         print(grid[r_it][c_it], end=" ")

    #     print()

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
            