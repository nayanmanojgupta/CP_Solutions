def move(disks, source, auxiliary, target):

    if disks > 0:

        # move `N-1` discs from source to auxiliary using the target
        # as an intermediate pole
        move(disks - 1, source, target, auxiliary)

        # move one disc from source to target
        print("Move disk", disks, "from", source, "—>", target)

        # move `N-1` discs from auxiliary to target using the source
        # as an intermediate pole
        move(disks - 1, auxiliary, source, target)


# Tower of Hanoi Problem
if __name__ == '__main__':

    N = 3
    move(N, 1, 2, 3)
