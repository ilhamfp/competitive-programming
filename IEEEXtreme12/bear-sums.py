# ===================================
# (c) MidAndFeed aka ASilentVoice
# ===================================
# from math import pow 
# import collections
# import string
# import sys
# ===================================
t = int(input())
for i in range(t):
	s, e = [int(x) for x in input().split(" ")]
	occurence = dict()
	ans = []
	for x in map(int, input().split()):
		if x not in occurence.keys():
			occurence[x] = 1
		else:
			occurence[x] += 1

		complement = s-x

		if complement in occurence.keys() and occurence[complement] > 0:
			if complement == x and occurence[x] < 2:
				continue
			ans.append(x)
			ans.append(complement)
			break

	if len(ans) > 0:
		ans.sort()
		print(" ".join(map(str, ans)))
	else:
		print("!OK")
