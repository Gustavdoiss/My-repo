<<<<<< HEAD
horaIni, minIni, horaFim, minFim = map(int, input().split())

if horaIni > horaFim:
    horas = horaFim+24 - horaIni
    if minIni > minFim:
        horas -= 1
        minutos = minFim+60 - minIni
    else:
        minutos = minFim - minIni
elif horaIni <= horaFim:
    horas = horaFim - horaIni
    if minIni > minFim:
        horas -= 1
        minutos = minFim+60 - minIni
    else:
        minutos = minFim - minIni

print(f"O JOGO DUROU {horas} HORA(S) E {minutos} MINUTO(S)")
=======
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
>>>>>>> a938ded9c83269265cd678565294062925f11727
