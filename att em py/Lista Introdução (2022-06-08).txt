1)a)
m = [1.5, 6.3, 7.3, 4.3]
print(m[2])
b)
m = [1.5, 6.3, 7.3, 4.3]
m[1] = 7.8
print(m[1])
c)
m = [1.5, 6.3, 7.3, 4.3]
print(m[0] + m[1] + m[2] + m[3])
d)
m = [1.5, 6.3, 7.3, 4.3]
print((m[0] + m[1] + m[2] + m[3])/4)
2)a)
m = [3, 6, 5, 8, 9]
print(m[4])
b)
m = [3, 6, 5, 8, 9]
print(m[0])
c)
a = int(input())
m = [3, a, 5, 8, 9]
print(m)
d)
m = [3, 6, 5, 8, 9]
print(m[0] + m[1] + m[2] + m[3]+m[4])
3)a)
m = [6, 6, 5]
if m[0] == m[1]:
    m[0] = m[1]
    m[1] = m[0]
print(m)
b)
m = [6, 6, 5]
if m[1] == m[2]:
    m[1] = m[2]
    m[2] = m[1]
print(m)
c)
m = [6, 6, 5]
for x in m:
    print(x)
4)a)

5)a)
m = [1, 6, 5, 3, 6, 5, 8, 7, 9, 10]
for x in m:
    print(x)
b)
m = [1, 6, 5, 3, 6, 5, 8, 7, 9, 10]
for x in m:
    if x % 2 == 0:
        print(x)
c)
m = [1, 6, 5, 3, 6, 5, 8, 7, 9, 10]
l = sum(m)
print(l)
6)a)
m = [1, 6, 5, 3, 6, 5, 8, 7, 9, 10]
for x in m:
    print(x)
b)
m = [1, 6, 5, 3, 6, 5, 8, 7, 9, 10]
for x in m:
    if x > 7:
        print(x)
c)
m = [1, 6, 5, 3, 6, 5, 8, 7, 9, 10]
for x in m:
    if x <= 7:
        print(x)
d)
m = [1, 6, 5, 3, 6, 5, 8, 7, 9, 10]
l = sum(m)
print(l)
e)
m = [1, 6, 5, 3, 6, 5, 8, 7, 9, 10]
l = sum(m) / 10
print(l)


