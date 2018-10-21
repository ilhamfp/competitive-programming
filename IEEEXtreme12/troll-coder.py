# ===================================
# (c) MidAndFeed aka ASilentVoice
# ===================================
# import math 
# import collections
# import string
import sys
# ===================================
n = int(input())
q = [0]*n
s = "Q {}".format(" ".join(map(str, q)))
print(s)
temp = int(input())
x = temp
for i in range(n):
	q[i] = 1
	s = "Q {}".format(" ".join(map(str, q)))
	print(s)
	sys.stdout.flush()
	x = int(input())
	if x < temp:
		q[i] = 0
	temp = max(x, temp)
	if x == n:
		break
print("A {}".format(" ".join(map(str, q))))