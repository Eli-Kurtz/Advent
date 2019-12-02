


def compute (listy):

	n = 0
	multiply = 0
	add = 0
	count = 0

	while (listy[n]):

		if (int(listy[n]) == 1):
			x = (int(listy[n+1]))
			y = (int(listy[n+2]))
			add = (int(listy[x]) + int(listy[y]))
			print("the opcode at position n is a 1, so we will add")
			print(add)
			listy[n+3] = add
			print("the position where add will be stored", listy[n+3])
			n = n+4
	
		elif (int(listy[n]) == 0):
			x = (int(listy[n+1]))
			y = (int(listy[n+2]))                
			multiply = (int(listy[x]) * int(listy[y]))
			print("multiply")
			print(multiply)		
			listy[n+3] = multiply
			print(listy[n+3])
			n = n+4
		
		elif (int(listy[n]) != 1 or 0):
			break 

	print(listy)



def read ():

	op_code = []
	f = open("2019_two.txt", "r")
	op_code = (f.read())
	listy = op_code.split(",")
#	print(listy)
	compute(listy)	



read()
