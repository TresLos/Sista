"""
Intentarem fer un sumador a partir d'un generador de diccionaris
"""

def test ():
	b = generatorBase ()
	return GeneratorSum (b, len(b))

# Mal fet, pero aqui un generador'' de digits
def generatorBase (): return ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']


def GeneratorSum (base, lenB):
	mov = base[:]
	dic = {}

	for lola in base:
		for i in xrange (lenB):
			dic[lola + base[i]] = mov[i]
		mov = mov[1:] + [mov[0]]

	return dic

a = test ()
