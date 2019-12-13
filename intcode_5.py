def input_mode(program, ip):

    print("program entered input mode module")

    user_i = input("enter a number to store at position")
    output_place = program[ip + 1]
    # print(output_place)
    # print(program[output_place])
    program[output_place] = user_i
    ip += 2

    compute(program, ip)


def output_mode(opcode_array, program, ip):

    print("program entered output mode module")

    if opcode_array[-3] == 0:
        position = program[ip + 1]
        value_1 = program[position]

    elif opcode_array[-3] == 1:
        value_1 = program[ip + 1]

    else:
        print("FAIL in output mode")
        return

    output_place = program[ip + 2]
    program[output_place] = value_1
    ip += 2

    compute(program, ip)


def mult_mode(opcode_array, program, ip):

    print("program entered mult mode module")

    if opcode_array[-3] == 0:
        position = program[ip + 1]
        value_1 = program[position]

    elif opcode_array[-3] == 1:
        value_1 = program[ip + 1]

    else:
        print("FAIL in mult mode")
        return

    if opcode_array[-4] == 0:
        position = program[ip + 2]
        value_2 = program[position]

    elif opcode_array[-4] == 1:
        value_2 = program[ip + 2]

    else:
        print("FAIL in mult mode")
        return

    total = value_1 * value_2
    print("total from mult is ", total)
    output_place = program[ip + 3]
    program[output_place] = total
    ip += 4

    compute(program, ip)


def addition_mode(opcode_array, program, ip):

    print("program entered addition mode module")

    if opcode_array[-3] == 0:
        position = program[ip+1]
        value_1 = program[position]

    elif opcode_array[-3] == 1:
        value_1 = program[ip+1]

    else:
        print("FAIL in addition mode")
        return

    if opcode_array[-4] == 0:
        position = program[ip+2]
        value_2 = program[position]

    elif opcode_array[-4] == 1:
        value_2 = program[ip+2]

    else:
        print("FAIL in addition mode")
        return

    total = value_1 + value_2
    print("total from add is ", total)
    output_place = program[ip+3]
    program[output_place] = total
    ip += 4

    compute(program, ip)
# unsure about the benefit of having different modules for each opcode.


def mode(opcode, program, ip):

    print("program entered initial mode module")

    opcode_array = list(map(int, str(opcode)))

    length = len(opcode_array)

    if length == 2:
        opcode_array.insert(0, 0)
        opcode_array.insert(0, 0)
        opcode_array.insert(0, 0)

# https://www.geeksforgeeks.org/python-perform-append-at-beginning-of-list/

    elif length == 3:
        opcode_array.insert(0, 0)
        opcode_array.insert(0, 0)

    elif length == 4:
        opcode_array.insert(0, 0)

    else:
        print(" FAIL")
        print(opcode_array)
        return
    # adding the 5th 0 is probably unnecessary

    if opcode == 99:
        print("program terminated at ip ", ip)
        return 1

    if opcode_array[-1] == 1:
        addition_mode(opcode_array, program, ip)

    elif opcode_array[-1] == 2:
        mult_mode(opcode_array, program, ip)

    elif opcode_array[-1] == 3:
        input_mode(program, ip)

    elif opcode_array[-1] == 4:
        output_mode(opcode_array, program, ip)

    else:
        print(" FAIL")
        print(opcode_array)
        return

    return


def compute(program, ip):

    # print(program)
    length = len(program)

    while ip < length:
        if program[ip] == 1:
            pos_one = program[ip+1]
            pos_two = program[ip+2]
            pos_out = program[ip+3]
            value_added = program[pos_one] + program[pos_two]
            program[pos_out] = value_added
            ip += 4
            print("preformed action on opcode 1")
            print(value_added)
            print("ip is ", ip)

        elif program[ip] == 2:
            pos_one = program[ip+1]
            pos_two = program[ip+2]
            pos_out = program[ip+3]
            value_mult = program[pos_one] * program[pos_two]
            program[pos_out] = value_mult
            ip += 4
            print("preformed action on opcode 2")
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
    # stolen from ian hoffman
    # print(program)
    compute(program, 0)


reader()