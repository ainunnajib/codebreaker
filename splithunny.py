r, c = map(int, input().split())
g = []
for _ in range(r):
    g.append([c == 'H' for c in input()])

vis = [[False for j in range(c)] for i in range(r)]
ans = 0
for i in range(r):
    for j in range(c):
        if vis[i][j]:
            continue
        vis[i][j] = True
        if not g[i][j]:
            continue

        ans += 1
        q = [(i, j)]
        while len(q) > 0:
            x, y = q[-1]
            q.pop()
            if x>0:
                if g[x-1][y] and not vis[x-1][y]:
                    q.append((x-1, y))
                vis[x-1][y] = True
            if y>0:
                if g[x][y-1] and not vis[x][y-1]:
                    q.append((x, y-1))
                vis[x][y-1] = True
            if x<r-1:
                if g[x+1][y] and not vis[x+1][y]:
                    q.append((x+1, y))
                vis[x+1][y] = True
            if y<c-1:
                if g[x][y+1] and not vis[x][y+1]:
                    q.append((x, y+1))
                vis[x][y+1] = True

print("Oh, bother. There are", ans, "pools of hunny.")