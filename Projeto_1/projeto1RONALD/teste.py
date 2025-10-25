from src.Cliente import Cliente

# Teste da classe Cliente
cliente1 = Cliente("João Silva", 30, 1000.0)
cliente1.mostrar_informacoes()  # Exibe as informações iniciais

# Atualizando o saldo
cliente1.atualizar_saldo(500.0)
cliente1.mostrar_informacoes()  # Exibe as informações após atualização do saldo
