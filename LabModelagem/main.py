import pandas as pd

# Criando os DataFrames
funcionario = pd.DataFrame({
    'id_fun': range(1, 4),
    'nome_fun': ['Roberto', 'Maria', 'Carlos'],
    'idade_fun': [34, 28, 40],
    'salario_fun': [4000.00, 5000.00, 4500.00]
})

cliente = pd.DataFrame({
    'id_cli': range(1, 5),
    'nome_cli': ['João', 'Pedro', 'Ana', 'Sabrina'],
    'fun_id': [2, 1, 3, 2]
})

print(funcionario)

print("\n")

print(cliente)

print("\n")

# Adicionando uma chave auxiliar 'key'
funcionario['key'] = 1
cliente['key'] = 1

# Aplicando o produto cartesiano
produto_cartesiano = pd.merge(funcionario, cliente, on='key').drop('key', axis=1)

result = produto_cartesiano

result = result[result['id_fun'] == result['fun_id']]

print(result)