open = "1"

class Figura:
  def __init__(self, base, altura):
    self.base = base
    self.altura = altura

  def calcularArea(self):
    self.area = self.base * self.altura
    print("El area de la figura es", self.area, "\n")

  def calcularPerimetro(self):
    self.perimetro = self.base * 4
    print("El perimetro de la figura es", self.perimetro, "\n")

  def cargarDatos(self):
    self.base = input("Ingresa la base de la figura: ")
    self.altura = input("Ingresa la altura de la figura: ")
    print("La base ingresada es: ", self.base)
    print("La altura ingresada es: ", self.altura, "\n")

  def showArea(self):
    print("El area de la figura es", self.area, "\n")

  def showPerimetro(self):
    print("El perimetro de la figura es", self.perimetro, "\n")


# mi_account = Figura(1, 2131321, 100, 3)
# mi_account.retirar()
# mi_account.show()

mi_figure = Figura(2,2)

mi_figure.calcularArea()
mi_figure.cargarDatos()
mi_figure.calcularPerimetro()
mi_figure.showArea()
mi_figure.showPerimetro()
