// Day 29: Bitwise AND

if __name__ == '__main__':
   
    T = int(input().strip())
    for _ in range(T):
        n , k = map(int , input().split())
        print(k-1 if ((k-1) | k) <= n else k-2)