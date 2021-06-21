a = [730,304,680,284,860,196,505,204,1020,408,1000,396,995,408,995,392,975,392,1130,500]
b = [(a[i] // 5 - a[i + 1] // 4) if i % 2 == 0 else (a[i] // 4) for i in range(len(a))]
flag = "".join([chr(c) for c in b])
print flag