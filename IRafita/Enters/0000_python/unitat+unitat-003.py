"""
Versio de nomes creixent

- Nomes funciona si la base es parella
"""

def test ():
	b = generatorBase ()
	return GeneratorSum (b, len (b))

def test1():
	b = generatorBase1()
	return GeneratorSum (b, len (b))

def generatorBase (): return ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
def generatorBase1(): return ['0', '1', '2', '3', '4']

def GeneratorSum (base, lenB):
	sumant	= base[:]
	result	= base[:]
	suma	= []
	resu	= []
	dic = {}

	for lola in base:
		if sumant:
			for loli, lili in collons (sumant, result):
				dic[lola + loli] = (lili, False)
			for loli, lili in collons (suma, resu):
				dic[lola + loli] = (lili, True)

			if sumant[0] == sumant[-1]:
				resu = resu[1:] + [sumant.pop ()]
			else:# en queden minim dos
				resu += [sumant.pop (0)]
				suma = [sumant.pop ()] + suma
				result = result[2:]
		else:
			for loli, lili in collons (suma, resu):
				dic[lola + loli] = (lili, True)
			resu = resu[2:]
			resu += [suma.pop (0)]
	return dic

def collons (a, b):
	out = []
	for i in xrange (len (a)):
		out += [(a[i], b[i])]
	return out

a = test ()
b = test1()
