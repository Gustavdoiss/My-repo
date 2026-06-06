n1, n2, n3, n4 = map(float, input().split())

media = (n1*2 + n2*3 + n3*4 + n4*1)/10
print(f"Media: {media:.1f}")
if media >= 7:
    print("Aluno aprovado.")
elif media >= 5 and media < 7:
    print("Aluno em exame.")

    NotaExame = float(input())
    print(f"Nota do exame: {NotaExame:.1f}")
    novaMedia = (media+NotaExame)/2

    if novaMedia >= 5:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    
    print(f"Media final: {novaMedia:.1f}")
else:
    print("Aluno reprovado.")