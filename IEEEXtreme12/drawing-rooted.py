	try:
		infix = str(input().strip())
		prefix = str(input().strip())
		horpos = dict()
		# horposindex = dict()
		# verpos = dict()
		n = len(infix)
		verpos = [[] for i in range(n)]

		def buildVerpos(inf, pref, counter):
		    root = pref[0]
		    verpos[counter].append(root)
		    besar_kiri = inf.index(root)
		    if besar_kiri > 0:
		        # Sebelah kiri
		        buildVerpos(inf[:besar_kiri], pref[1:besar_kiri+1], counter+1)

		    if (besar_kiri + 1) < len(inf):
		        # Sebelah kanan
		        buildVerpos(inf[besar_kiri+1:], pref[besar_kiri+1:], counter+1)


		def buildHorpos(s, i, n):
		    for i in range(n+1):
		        horpos[s[i]] = i
		        # horposindex[i] = s[i]

		tree = dict()

		# def buildPosition():
		#   for x in horpos.keys():
		#       print(x)
		        # tree[x] = (verpos[x], horpos[x])

		buildHorpos(infix, 0, n-1)
		buildVerpos(infix, prefix, 0)
		# print(horpos, verpos)
		# print(horpos)
		# print(verpos)
		# buildPosition()
		# print(tree)
		# for i in range(n):
		    # print(i, i<<1, (i<<1) + 1)
		for row in verpos:
		    if len(row) > 0:
		        temp = [" " for i in range(n)]
		        # print(row)
		        for char in row:
		            temp[horpos[char]] = char
		        # print(temp)
		        print("".join(temp))
	except:
		break

# for 
# 