
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

        else:
            print("the integer pointer at time of death is", ip)
            print("program died here at the value",  program[ip])
            break

    print(program)


def reader():
    with open("2019_five_1.txt") as fo:
        line = fo.readline()

    program = [int(s) for s in line.rstrip().split(sep=",")]

    print("\n read %d Intcodes from input file\n" % (len(program)))
    length = len(program)
    #stolen from ian hoffman
    compute(program, length)


reader()