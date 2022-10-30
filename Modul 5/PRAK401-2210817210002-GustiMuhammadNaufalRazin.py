a, s = input().split()
a = int(a)
for i in range(1, 51):
  print(s, end=' ') if i % a == 0 else print(i, end=' ')