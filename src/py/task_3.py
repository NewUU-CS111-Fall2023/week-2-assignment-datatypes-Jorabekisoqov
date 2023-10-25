import random

class RandomNumberDivider:
  def devider(a):
    digits = []
    for i in range(100):
      digits.append(random.randint(0, 9))
    digit=int(''.join([str(d) for d in digits]))
    result = digit // a
    print('The result of dividing the 100-digit number by A is:', result)

if __name__ == '__main__':
    print("hi")