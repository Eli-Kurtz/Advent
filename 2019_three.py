
def str_to_int (mixed):
	
	print(mixed[1]) 


def first (mixed):

	n = 0

	for i in mixed:

		if (mixed[n][0]) == "R":
			mixed[n][0] = 1
		elif (mixed[n][0]) == "L":
			mixed[n][0] = 2
		elif (mixed[n][0]) == "U":
                        mixed[n][0] = 3
		elif (mixed[n][0]) == "D":
                        mixed[n][0] = 4

		n = n+1
	
	return mixed



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
	
	wire_1 = first(wire_1)
	wire_2 = first(wire_2)	
	
	wire_1 = str_to_int(wire_1)
#	print(wire_1)

#	wire_1 = list(map(int, wire_1)
#this isnt working

read()
