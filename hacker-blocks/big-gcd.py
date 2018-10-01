def gcd(a, b):
    tmax=max(a,b)
    tmin=min(a,b)

    if(tmax % tmin == 0):
        return tmin

    else:
        return gcd(tmax, tmax/tmin)

def main():

    a,b = map(int, raw_input().split())
    print(gcd(a, b))

if __name__ == '__main__':
    main()

