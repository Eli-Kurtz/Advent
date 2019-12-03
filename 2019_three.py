

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





def concat_1 (mixed):
	
	for i in mixed:
		print(i[:1])
#https://www.odoo.com/forum/help-1/question/how-to-get-a-first-character-from-a-string-74789
		i = (i[1:])
		print(i)	
	return mixed




def read ():
	i =0
	f = open("2019_three.txt", "r")
	wire_1 = f.readline()
	wire_2 = f.readline()
	f.close()
	wire_1 = wire_1.rstrip().split(",")
	wire_2 = wire_2.rstrip().split(",")
	
	wire_1 = concat_1(wire_1)

#	print(wire_1)			



read()





