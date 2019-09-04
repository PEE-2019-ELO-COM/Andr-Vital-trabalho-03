class Notas:
	def __init__(self, name):
		self.name = name
		self.value = 10*float(input('Nota da '+ self.name + ': '))
		while self.value < 0 or self.value > 100:
			print('Nota inválida')
			self.value = 10*float(input('Nota da '+ self.name + ': '))

def quantoFalta(notaVE1, notaVC, notaVE2):

	media = (notaVC + (notaVE1 + notaVE2)/2)/2
	media = round(media)/10

	if media >= 6:
		return 4
	else:
		return 10 - media

notaVE1 = Notas("VE 1")
notaVC = Notas("VC")
notaVE2 = Notas("VE 2")

notaNecessaria = quantoFalta(notaVE1.value, notaVC.value, notaVE2.value)

print('A nota minima necessária para não ficar de rec é ' + str(notaNecessaria))