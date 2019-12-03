
#going to have to print out / write to file / array all the values in the range of z so i can see where the crosses are


def first (mixed):

	n = 0
	collecting = []
	for i in mixed:

		if (mixed[n][0]) == "R":
			mixed[n][0] = 1
			mixed[n][1] = int(mixed[n][1])
			z = (mixed[n][1])
			for i in range(z):
				cord = ("R", i)
				collecting.append(cord)	
		elif (mixed[n][0]) == "L":
			mixed[n][0] = 2
			mixed[n][1] = int(mixed[n][1])
			z = (mixed[n][1])
			for i in range(z):
                                cord = ("L", i)
                                collecting.append(cord)
		elif (mixed[n][0]) == "U":
			mixed[n][0] = 3
			mixed[n][1] = int(mixed[n][1])
			z = (mixed[n][1])
			for i in range(z):
                                cord = ("U", i)
                                collecting.append(cord)
		elif (mixed[n][0]) == "D":
			mixed[n][0] = 4
			mixed[n][1] = int(mixed[n][1])
			z = (mixed[n][1])
			for i in range(z):
                                cord = ("D", i)
                                collecting.append(cord)
		n = n+1

	print(collecting)			
	return mixed





def concat (mixed):
	
	new_array = []

	for i in mixed:

		inner_array = []

		a = (i[:1])
#https://www.odoo.com/forum/help-1/question/how-to-get-a-first-character-from-a-string-74789
		b = (i[1:])

		inner_array.append(a)
		inner_array.append(b)	
		new_array.append(inner_array)

	return new_array 




def read ():
	i =0
	f = open("2019_three.txt", "r")
	wire_1 = f.readline()
	wire_2 = f.readline()
	f.close()
	wire_1 = wire_1.rstrip().split(",")
	wire_2 = wire_2.rstrip().split(",")
	
	wire_1 = concat(wire_1)
	wire_2 = concat(wire_2)			

	wire_1 = first(wire_1)
	wire_2 = first(wire_2)

#	wire_1 = stuff(wire_1)

#	print(wire_1)

read()





