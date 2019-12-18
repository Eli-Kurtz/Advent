def branch(dictionary, key):

    next_limb = []
    branch_length = len(dictionary[key])
    print("there are ", branch_length, "elements in this value")

    while dictionary[key]:
        next_limb.append(key)
        key = dictionary[key][0]
        if len(dictionary[key]) != 1:
            branch(dictionary, key)

        print("the next_limb array is ", next_limb)

    return next_limb


def reader():
    with open("2019_six.txt") as fo:
        line = fo.readlines()

    dictionary = dict()

    list_orb = []

    for _ in line:
        orbital = _.strip().split(sep=")")
        list_orb.append(orbital)

    for i in list_orb:
        parent = i[0]
        child = i[1]
        if parent not in dictionary:
            dictionary[parent] = []
        value = dictionary[parent]
        value.append(child)

    limb = []

    key = 'COM'

    # print("the value of key FH4 is ", dictionary['FH4'])

    while dictionary[key]:
        limb.append(key)
        key = dictionary[key][0]
        if len(dictionary[key]) != 1:
            limb.append(dictionary[key][0])
            print("the next key would be", dictionary[key])
            print(limb)
            next_limb = branch(dictionary, key)
            limb.append(next_limb)
        elif not len(dictionary[key]):
            quit()

        print(limb)



reader()