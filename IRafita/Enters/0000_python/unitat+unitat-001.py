"""
Intentarem fer un sumador que digui si en portem un

- Proxim, com que es simetric, poder atacar  nomes petit gran
"""

def generatorBase (): return ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']

def test ():
	b = generatorBase ()
	return GeneratorSum (b, len (b))

def collons (a, b):
	out = []
	for i in xrange (len (a)):
		out += [(a[i], b[i])]
	return out

def GeneratorSum (base, lenB):
	sumant	= base[:]
	result	= base[:]
	suma	= []
	resu	= []
	dic = {}

	for lola in base:
		for loli, lili in collons (sumant, result):
			dic[lola + loli] = (lili, False)
		for loli, lili in collons (suma, resu):
			dic[lola + loli] = (lili, True)
		suma  = [sumant.pop ()] + suma
		resu += [result.pop (0)]
	return dic

a = test ()
