def bomdia(n):
    if n > 0:
        print("Bom dia")
        bomdia(n-1)
    
n = int(input())
bomdia(n)