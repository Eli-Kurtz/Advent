

def read ():

	array = []
	
	f = open("2019_two.txt", "r")

	while True:
		op_code = f.readlines()
		array.append(op_code)
		if not op_code:
			break

	print(array[0])

#	op_code.split(",")



read()
