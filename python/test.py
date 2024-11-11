from sympy.logic.boolalg import truth_table
from sympy.abc import x, y, z

# Definisikan ekspresi logika dengan tiga pernyataan
expression = (x >> y) & z  # Contoh ekspresi: Implikasi (x -> y) dan (z)

# Buat tabel kebenaran untuk tiga variabel
table = truth_table(expression, [x, y, z])

# Cetak tabel kebenaran
for t in reversed(list(table)):
    print('{0} -> {1}'.format(t[:-1], t[-1]))

