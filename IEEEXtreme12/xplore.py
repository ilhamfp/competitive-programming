import json
n = int(input())

author = {}

for _ in range(n):
    s = str(input())
    d = json.loads(s)
    for x in d['authors']['authors']:
        if x['full_name'] in author.keys():
            author[x['full_name']].append(d['citing_paper_count'])
        else:
            author[x['full_name']] = []
            author[x['full_name']].append(d['citing_paper_count'])


for x in author:
    author[x].sort(reverse=True)

ans = []


for x in author:
    listCitation = author[x]
    # print(x)
    # print(listCitation)
    count=0
    for item in listCitation:
        if item>count:
            count+=1
        else:
            break

    ans.append((x,count))


ans.sort(key=lambda x: (-x[1], x[0]))

for x,y in ans:
    print("{} {}".format(x,y))
