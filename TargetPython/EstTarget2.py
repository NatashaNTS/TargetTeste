def count_a_in_string(s):
    count = s.lower().count('a')
    return count

texto = input("Informe uma string: ")
count = count_a_in_string(texto)
if count > 0:
    print(f"A letra 'a' aparece {count} vezes na string.")
else:
    print("A letra 'a' não aparece na string.")