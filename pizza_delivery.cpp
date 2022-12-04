from collections import defaultdict 

for t in range(int(input())): 
    ans = 0 
    n, p, m, startr, startc = map(int, input().split()) 
    inp = [input() for j in range(4)] 
    booth = [] 
    directions = [[-1, 0], [0, 1], [0, -1], [1, 0]] 
    for d in inp: 
        d = d.split() 
        booth.append((d[0], int(d[1]))) 
     
    cust = {} 
    for _ in range(p): 
        inp = list(map(int, input().split())) 
        cust[(inp[0], inp[1])] = inp[2] 

    best = defaultdict(lambda: -float("inf")) 
    last = [(startr, startc, 0)] 
    best[(startr, startc)] = 0 

    for _ in range(m): 
        cur = [] 
        for row, col, coin in last: 
            for k in range(4): 
                x, y = row + directions[k][0], col + directions[k][1] 
                newcost = coin 
                 
                if booth[k][0] == '+': 
                    newcost = coin + booth[k][1] 
                elif booth[k][0] == '-': 
                    newcost = coin - booth[k][1] 
                elif booth[k][0] == '*': 
                    newcost = coin * booth[k][1] 
                elif booth[k][0] == '/': 
                    newcost = coin // booth[k][1] 
                 
                if 0 < x <= n and 0 < y <= n and newcost > best[(x, y)]: 
                    best[(x, y)] = newcost 
                    ans = max(ans, newcost) 
                    cur.append((x, y, newcost)) 
        last = cur 

    print(f"Case #{t+1}: {ans}")