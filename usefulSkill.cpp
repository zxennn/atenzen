######  1  ########

#include <stdio.h>
#include <iostream>


auto addVal(int t) {
  return [t](const int& val1,
             const int& val2 ) {
    int res;
    if(t)
    {
            return val1+val2;
    }
    return 0;
  };
}


int main()
{
    const int a =3;
    const int b =5;
    auto myFunc = addVal(1);
    int result = myFunc(a,b);

    std::cout << "result is " << result << std::endl;
    return 0;
}






######  2  ########


#include <iostream>

class Complex {
public:
    Complex(double r = 0.0, double i = 0.0): real(r), imag(i) {}

    // 重载加法操作符 "+"
    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    // 重载减法操作符 "-"
    Complex operator-(const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    // 重载乘法操作符 "*"
    Complex operator*(const Complex& c) const {
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
    }

    // 重载输出流操作符 "<<"
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << "(" << c.real << ", " << c.imag << ")";
        return os;
    }

private:
    double real;
    double imag;
};

int main() {
    Complex a(1.0, 2.0);
    Complex b(3.0, 4.0);

    // 使用重载的加法操作符
    Complex c = a + b;
    std::cout << "a + b = " << c << std::endl;

    // 使用重载的减法操作符
    Complex d = a - b;
    std::cout << "a - b = " << d << std::endl;

    // 使用重载的乘法操作符
    Complex e = a * b;
    std::cout << "a * b = " << e << std::endl;

    return 0;
}
