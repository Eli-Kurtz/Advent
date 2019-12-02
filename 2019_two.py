


def compute (listy, n):

	total = 0	

	if (listy[n] == 1):
		print
	
	if (listy[n] == 0):
		


def read ():

	op_code = []
	n = 0
	f = open("2019_two.txt", "r")
	op_code = (f.read())
	listy = op_code.split(",")
	compute(listy, n)	

read()
