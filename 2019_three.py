
def first (mixed):

	n = 0

	for i in mixed:
		if (mixed[n][0]) == "R":
			print("hello")
		n = n+1




def concat_2 (mixed):

	array_2 = []

	for i in mixed:
		array_2.append(list(i))
	
	return array_2


def concat_1 (mixed):

	array_1 = []
	
	for i in mixed:
		array_1.append(list(i))
	
	return array_1

#https://www.geeksforgeeks.org/python-split-string-into-list-of-characters/
#trying to init a 2d array. not working		



def read ():
	i =0
	f = open("2019_three.txt", "r")
	wire_1 = f.readline()
	wire_2 = f.readline()
	f.close()
	wire_1 = wire_1.rstrip().split(",")
	wire_2 = wire_2.rstrip().split(",")
	wire_1 = concat_1(wire_1)
	wire_2 = concat_2(wire_2)
	
	first(wire_1)

read()
