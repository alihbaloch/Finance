# Cash program

from cs50 import get_float



def main():

    dollar_amount = get_dollars()

    quarter_amount = quarters(dollar_amount)
    dollar_amount = dollar_amount - quarter_amount * 25

    dime_amount = dimes(dollar_amount)
    dollar_amount = dollar_amount - dime_amount * 10

    nickel_amount = nickels(dollar_amount)
    dollar_amount = dollar_amount - nickel_amount * 5

    penny_amount = pennies(dollar_amount)
    dollar_amount = dollar_amount - penny_amount * 1

    coins = q




    print(dollar_amount)



def get_dollars():

    while True:
        dollars = get_float("Input number of dollars: ")
        if dollars > 0:
            return dollars

main()



def quarters(dollars):

    quarters = dollars / 25
    return quarters

main()


def dimes(dollars):

    dimes = dollars / 10
    return dimes

main()

def nickels(dollars):

    nickels = dollars / 5
    return nickels

main()


def pennies(dollars):

    pennies = dollars / 1
    return pennies

main()