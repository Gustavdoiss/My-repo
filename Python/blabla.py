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