from collections import deque
def p(d):
    try:
        r = d.pop()
    except IndexError as e:
        return None
    d.append(r)
    return r
dq = deque()
for i in range(1, 10):
    dq.append(i)
print(p(dq))
print(dq)