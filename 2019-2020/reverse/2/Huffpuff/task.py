a = [('C',34),('I',0),('L',35),('P',32),('R',33),('S',38),('T',1),('_',1),('a',7),('c',30),('d',1),('e',1),('f',39),('g',8),('h',36),('i',5),('k',37),('m',31),('n',6),('o',6),('p',58),('r',10),('s',11),('t',9),('u',59),('y',28)]
s = sum([x[1] for x in a])
b = [(x[0], x[1] / s) for x in a]
for x in b:
	print(x[0], x[1], sep=';')

a = [('A',6),('E',2),('F',7),('G',7),('H',0),('I',26),('L',10),('N',27),('O',4),('R',12),('S',11),('T',2),('U',3),('Y',1)]
s = sum([x[1] for x in a])
b = [(x[0], x[1] / s) for x in a]
for x in b:
	print(x[0], x[1], sep=';')
