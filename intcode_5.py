
def mult_mode(opcode_array, program, ip):

    value_1 = program[ip + 1]

def addition_mode(opcode_array, program, ip):

    pos_out = program[ip + 1]
    value_1 = program[pos_out]

#unsure about the value of having different modules for each opcode.

def mode(opcode, program, ip):

    opcode_array = list(map(int, str(opcode)))

    length = len(opcode_array)
    if length == 2:
        opcode_array.insert(0, 0)
        opcode_array.insert(0, 0)
        opcode_array.insert(0, 0)

    elif length == 3:
        opcode_array.insert(0, 0)
        opcode_array.insert(0, 0)

    else:
        print(" FAIL")
        return

    if opcode == 99:
        print("program terminated at ip ", ip)
        return 1

    if opcode_array[-1] == 1:
        addition_mode(opcode_array, program, ip)

    elif opcode_array[-1] == 2:


    return


def compute(program, length):

    ip = 0

    while ip < length:
        if program[ip] == 1:
            pos_one = program[ip+1]
            pos_two = program[ip+2]
            pos_out = program[ip+3]
            value_added = program[pos_one] + program[pos_two]
            program[pos_out] = value_added
            ip += 4
            print("ip is ", ip)

        elif program[ip] == 2:
            pos_one = program[ip+1]
            pos_two = program[ip+2]
            pos_out = program[ip+3]
            value_mult = program[pos_one] * program[pos_two]
            program[pos_out] = value_mult
            ip += 4
            print("ip is ", ip)

        elif program[ip] == 3:
            user_i = input("enter a number to store at position ")
            print(program[ip+1])
            pos_out = program[ip+1]
            program[pos_out] = int(user_i)
            ip += 2

        elif program[ip] == 4:
            pos_out = program[ip+1]
            print(program[pos_out])
            ip += 2

        else:
            mode(program[ip], program, ip)
#            print("\nthe integer pointer at time of death is", ip)
#            print("\nprogram died here at the value",  program[ip])
#            break
            ip += 4

    print(program)


def reader():
    with open("2019_five.txt") as fo:
        line = fo.readline()

    program = [int(s) for s in line.rstrip().split(sep=",")]

    print("\n read %d Intcodes from input file\n" % (len(program)))
    length = len(program)
    #stolen from ian hoffman
    compute(program, length)


reader()