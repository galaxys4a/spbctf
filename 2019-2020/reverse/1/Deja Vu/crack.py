import sys

verify = [521, 339, 1028, 365, 1132, 352, 833]

text = ""
for i in range(0, 7):
    ch = (verify[i] + 337) / 13 - i
    text += chr(ch)

print text;
