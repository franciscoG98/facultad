open = "1"

class Bank_account:
  def __init__(self, acc_number, dni, acc_balance, annual_interest):
    self.acc_number = acc_number
    self.dni = dni
    self.acc_balance = acc_balance
    self.annual_interest = annual_interest

  def actualizarSaldo(self):
    update_balance = self.acc_balance * (1 - self.annual_interest / 365)
    self.acc_balance = update_balance
    print("Saldo actualizado a: ", self.acc_balance, "\n")

  def ingresar(self):
    enter_amount = input("Ingresa la cantidad de dinero que quieres ingresar: ")
    update_balance = self.acc_balance + int(enter_amount)
    self.acc_balance = update_balance
    print("INGRESO, saldo actual: ", self.acc_balance, "\n")

  def retirar(self):
    enter_amount = input("Ingresa la cantidad de dinero que quieres retirar: ")
    update_balance = self.acc_balance - int(enter_amount)
    self.acc_balance = update_balance
    print("RETIRO, saldo actual: ", self.acc_balance, "\n")

  def show(self):
    print("INFORMACION DE LA CUENTA")
    print("El número de cuenta numero: ", self.acc_number)
    print("Con dni: ", self.dni)
    print("Posee un balance de $", self.acc_balance)
    print("Al cual se le aplica un interés anual de: ", self.annual_interest, "\n")

mi_account = Bank_account(1, 2131321, 100, 3)

mi_account.show()
mi_account.actualizarSaldo()
mi_account.show()
mi_account.ingresar()
mi_account.show()
mi_account.retirar()
mi_account.show()
    
