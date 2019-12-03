


def compute (listy, pointer):

		a=0
		b=0
		c=0
		if (int(listy[pointer]) == 1):
			listy[listy[pointer + 1]] = a
			listy[listy[pointer + 2]] = b
			listy[listy[pointer + 3]] = c
			c = b + a
			return listy, pointer + 4		
	
		elif (int(listy[pointer]) == 2):
			listy[listy[pointer + 1]] = a 
			listy[listy[pointer + 2]] = b
			listy[listy[pointer + 3]] = c
			c = b * a
			return listy, pointer + 4
		
		elif (int(listy[pointer]) != 1 or 2):
			print("the program broke at position", pointer, "which has a value of", listy[pointer])
			return listy, -99 




def read ():
	
	pointer = 0
	op_code = []

	f = open("2019_two.txt", "r")
	op_code = (f.read())
	f.close()
	listy = op_code.rstrip().split(",")

	listy = list(map(int, listy))
#https://stackoverflow.com/questions/7368789/convert-all-strings-in-a-list-to-int
	copy = []	
	copy[:] = listy[:]

	while (pointer != -99):
		print(pointer)
		listy, pointer = compute(listy, pointer)	

	print(copy)	
	print(listy)

read()
