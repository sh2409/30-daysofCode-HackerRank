# Day 3:Intro to Conditional Statements

if __name__ == '__main__':
    N = int(input())
    if N%2 == 1:
        print("Weird")
    elif N%2 == 0:
        if N in range(2,6):
            print("Not Weird")
        elif N in range(6,21):
            print("Weird")
        else:
            print("Not Weird")            
